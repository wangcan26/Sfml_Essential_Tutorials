cmake_minimum_required(VERSION 3.0.2)

project(NV3D_SFML)

set(SOURCE_FILES main.cc)

add_executable(Hello_SFML ${SOURCE_FILES})


set(SFML_SDK "${CMAKE_CURRENT_SOURCE_DIR}/../../SFML_SDK")
message("NV3D test SFML_SDK ${SFML_SDK}")


#find SFML Library
#see https://stackoverflow.com/questions/19302542/finding-a-directory-in-cmake
find_path(SFML_INCLUDE_DIR_SYSTEM_H NAMES System.hpp PATHS /usr/include /usr/local/include ${SFML_SDK}/include/SFML/)
find_library(SFML_SYSTEM_LIBRARY NAMES sfml-system PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)
find_library(SFML_WINDOW_LIBRARY NAMES sfml-window PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)
find_library(SFML_GRAPHIC_LIBRARY NAMES sfml-graphics PATHS /usr/lib /usr/local/lib ${SFML_SDK}/lib)

set(SFML_LIBRARIES ${SFML_SYSTEM_LIBRARY} ${SFML_WINDOW_LIBRARY} ${SFML_GRAPHIC_LIBRARY})
set(SFML_INCLUDE_DIR ${SFML_INCLUDE_DIR_SYSTEM_H}/../)

message("NV3D test SFML_SDK include dir  ${SFML_INCLUDE_DIR}")
message("NV3D test SFML_SDK include dir  ${SFML_LIBRARIES}")

if(SFML_INCLUDE_DIR)
	include_directories(${SFML_INCLUDE_DIR})
endif()

if(SFML_LIBRARY)
	target_link_libraries(Hello_SFML ${SFML_LIBRARIES})
endif()
