set(SOURCE_FILES main.cc)

add_executable(AnimateSprite ${SOURCE_FILES})

set_target_properties(AnimateSprite PROPERTIES
    ARCHIVE_OUTPUT_DIRECTORY "${SFML_BUILD_OUTPUT}/lib"
    LIBRARY_OUTPUT_DIRECTORY "${SFML_BUILD_OUTPUT}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${SFML_BUILD_OUTPUT}/bin"
  )

if(SFML_LIBRARIES)
	target_link_libraries(AnimateSprite ${SFML_LIBRARIES})
endif()

if(SFML_TUTORIA_COMMON_LIBRARY)
  target_link_libraries(AnimateSprite ${SFML_TUTORIA_COMMON_LIBRARY})
endif()
