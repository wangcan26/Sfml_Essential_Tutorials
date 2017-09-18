#This is a Demo presenting How to render shape using sfml::RenderWindow

set(SOURCE_FILES main.cc)

add_executable(RenderWindow ${SOURCE_FILES})


if(SFML_LIBRARIES)
	target_link_libraries(RenderWindow ${SFML_LIBRARIES})	
endif()
