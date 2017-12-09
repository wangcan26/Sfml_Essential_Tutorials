#This is a Demo presenting How to load and use textures using sfml
set(SOURCE_FILES main.cc)

add_executable(Audio ${SOURCE_FILES})

if(SFML_LIBRARIES)
    target_link_libraries(Audio ${SFML_LIBRARIES})
endif()

if(SFML_TUTORIA_COMMON_LIBRARY)
  target_link_libraries(Audio ${SFML_TUTORIA_COMMON_LIBRARY})
endif()

ConfigureTarget(Audio)


