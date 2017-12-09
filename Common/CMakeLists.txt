#This is a Demo presenting How to load and use textures using sfml
set(SOURCE_FILES AssetManager.cc)

add_library(Common SHARED ${SOURCE_FILES})

if(SFML_LIBRARIES)
    target_link_libraries(Common ${SFML_LIBRARIES})
    message("SFML App Textures link libraries ${SFML_LIBRARIES}")
endif()

ConfigureTarget(Common)
