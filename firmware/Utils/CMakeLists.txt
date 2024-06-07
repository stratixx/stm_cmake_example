if(${BUILD_TESTING} STREQUAL "ON")
    message("Adding Utils test")
    add_subdirectory(test)
endif()
