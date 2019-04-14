add_executable(run_actual_tests testFILE_1.cpp testFILE_2.cpp  ../../Project_DIR/Source/IamAClass.cpp)

target_link_libraries(run_actual_tests gtest gtest_main)
