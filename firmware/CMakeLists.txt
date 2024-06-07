add_subdirectory(Utils)

if( CMAKE_CROSSCOMPILING )
    include(crosscompile.cmake)
endif()
