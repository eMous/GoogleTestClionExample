//
// Created by anon on 2019/4/14.
//

#include "gtest/gtest.h"

TEST(SUITE_A,TEST_A){
    ASSERT_EQ(1,1);
}
TEST(SUITE_A,TEST_B){
    ASSERT_EQ(1,2);
}
TEST(SUITE_B,TEST_A){
    ASSERT_EQ(1,1);
}
TEST(SUITE_B,TEST_B){
    ASSERT_EQ(1,2);
}