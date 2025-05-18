add_executable(test_me a_test.cc)

find_package(GTest CONFIG REQUIRED)
target_link_libraries(test_me PRIVATE tuhi GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

include(GoogleTest)
gtest_discover_tests(test_me) # 自动为每个测试用例添加 add_test
