cmake_minimum_required(VERSION 3.0.2)

project(NV3D_SFML)


set(SFML_SDK "${CMAKE_CURRENT_SOURCE_DIR}/../SFML_SDK")

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH}" "${CMAKE_CURRENT_SOURCE_DIR}/CMake/")

#find SFML Library
#see https://stackoverflow.com/questions/19302542/finding-a-directory-in-cmake
find_path(SFML_INCLUDE_DIR_SYSTEM_H NAMES System.hpp PATHS /usr/include /usr/local/include ${SFML_SDK}/include/SFML/)
find_library(SFML_SYSTEM_LIBRARY NAMES sfml-system PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)
find_library(SFML_WINDOW_LIBRARY NAMES sfml-window PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)
find_library(SFML_GRAPHIC_LIBRARY NAMES sfml-graphics PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)

set(SFML_LIBRARIES ${SFML_SYSTEM_LIBRARY} ${SFML_WINDOW_LIBRARY} ${SFML_GRAPHIC_LIBRARY})
set(SFML_INCLUDE_DIR ${SFML_INCLUDE_DIR_SYSTEM_H}/../)


set(SFML_BUILD_OUTPUT "${CMAKE_BINARY_DIR}")


if(SFML_INCLUDE_DIR)
	include_directories(${SFML_INCLUDE_DIR})
endif()

include(ConfigureTarget)

add_subdirectory(1.HelloSFML)
add_subdirectory(2.RenderWindow)
add_subdirectory(3.RenderShapes)
add_subdirectory(4.Textures)
#add_subdirectory(5.AnimateSprite)


install(DIRECTORY "${CMAKE_SOURCE_DIR}/Assets"
        DESTINATION "${SFML_BUILD_OUTPUT}/"
      )











