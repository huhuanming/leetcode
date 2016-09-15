//
//  reverseStringTest.c
//  LeetCode
//
//  Created by 胡 桓铭 on 16/9/15.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

#include "reverseStringTest.h"

TEST reverseStringEuqalGivenString(void) {
    ASSERT_STR_EQ("!olleh", reverseString("hello!"));
    PASS();
}

SUITE(reverseStringTestSuite) {
    RUN_TEST(reverseStringEuqalGivenString);
}
