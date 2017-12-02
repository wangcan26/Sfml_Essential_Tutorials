#This is a Demo presenting How to load and use textures using sfml
set(SOURCE_FILES main.cc)

add_executable(Textures ${SOURCE_FILES})

if(SFML_LIBRARIES)
    target_link_libraries(Textures ${SFML_LIBRARIES})
    message("SFML App Textures link libraries ${SFML_LIBRARIES}")
endif()


ConfigureTarget(Textures)


#install(TARGETS Textures RUNTIME DESTINATION "${SFML_BUILD_OUTPUT}/bin")

      




