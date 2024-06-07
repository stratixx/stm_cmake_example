project(UtilsUnitTests)

add_executable(${PROJECT_NAME})

include(GoogleTest)

set(INCLUDE_DIRS 
    ../
    )
set(TEST_INCLUDE_DIRS 
    ..
    .
    )
set(SRC 
    ../random/random.c
    )
set(TEST_SRC
    ut_random.cpp
    )

target_include_directories(${PROJECT_NAME} PUBLIC ${INCLUDE_DIRS} )
target_sources(${PROJECT_NAME} PRIVATE ${SRC} ${TEST_SRC})

target_link_libraries(${PROJECT_NAME} GTest::gtest_main GTest::gmock_main)

gtest_discover_tests(${PROJECT_NAME})
