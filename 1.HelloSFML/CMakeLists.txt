set(SOURCE_FILES main.cc)

add_executable(Hello_SFML ${SOURCE_FILES})

message("HelloSFML  link libraries: ${SFML_LIBRARIES}")

ConfigureTarget(Hello_SFML)

if(SFML_LIBRARIES)
	target_link_libraries(Hello_SFML ${SFML_LIBRARIES})
endif()
