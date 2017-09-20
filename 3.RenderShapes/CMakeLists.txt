#This is a Demo presenting How to render shape using sfml::RenderWindow

set(SOURCE_FILES main.cc)

add_executable(RenderShapes ${SOURCE_FILES})


if(SFML_LIBRARIES)
	target_link_libraries(RenderShapes ${SFML_LIBRARIES})	
endif()
