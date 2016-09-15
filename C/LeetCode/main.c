//
//  main.c
//  LeetCode
//
//  Created by 胡 桓铭 on 16/7/28.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <assert.h>
#include "greatest.h"
#include "reverseString.h"
#include "reverseStringTest.h"


GREATEST_MAIN_DEFS();

void runSuit(void){
    RUN_SUITE(reverseStringTestSuite);
}

int main(int argc, const char * argv[]) {
    GREATEST_MAIN_BEGIN();
    runSuit();
    GREATEST_MAIN_END();
}

