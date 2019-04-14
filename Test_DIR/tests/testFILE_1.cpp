//
// Created by anon on 2019/4/14.
//

#include "gtest/gtest.h"
#include "IamAClass.h"

namespace {
    class TestClass:public testing::Test{
    public:
        IamAClass test_IamClass_obj;
    };
}

TEST_F(TestClass,Test_ReturnZeroMethod){
    ASSERT_EQ(test_IamClass_obj.return_Zero(),0);
}

TEST_F(TestClass,Test_ReturnZeroMethod_1){
    ASSERT_EQ(test_IamClass_obj.return_Zero(),1);
}