cmake_minimum_required(VERSION 3.0.2)

project(NV3D_SFML)

macro(use_cxx11)
  if (CMAKE_VERSION VERSION_LESS "3.1")
    if (CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
      set (CMAKE_CXX_FLAGS "--std=gnu++11 ${CMAKE_CXX_FLAGS}")
    endif ()
  else ()
     set (CMAKE_CXX_STANDARD 11)
  endif ()
endmacro(use_cxx11)


set(SFML_SDK "${CMAKE_CURRENT_SOURCE_DIR}/../SFML_SDK")

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/CMake/" "${SFML_SDK}/share/SFML/cmake/Modules")

#find SFML Library
set(SFML_ROOT ${SFML_SDK})
find_package(SFML COMPONENTS system window graphics audio REQUIRED)


set(SFML_BUILD_OUTPUT "${CMAKE_BINARY_DIR}")


if(SFML_INCLUDE_DIR)
	include_directories(${SFML_INCLUDE_DIR})
endif()

include(ConfigureTarget)

use_cxx11()

add_subdirectory(Common)

find_library(SFML_TUTORIA_COMMON_LIBRARY NAMES Common PATHS ${SFML_BUILD_OUTPUT}/lib)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/Common)

add_subdirectory(1.HelloSFML)
add_subdirectory(2.RenderWindow)
add_subdirectory(3.RenderShapes)
add_subdirectory(4.Textures)
add_subdirectory(5.AnimateSprite)
add_subdirectory(6.Audio)


install(DIRECTORY "${CMAKE_SOURCE_DIR}/Assets"
        DESTINATION "${SFML_BUILD_OUTPUT}/"
      )











