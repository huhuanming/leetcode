//
//  reverseWordsInAString.c
//  LeetCode
//
//  Created by 胡 桓铭 on 16/8/2.
//  Copyright © 2016年 胡 桓铭. All rights reserved.
//

#include "reverseWordsInAString.h"

char* reverseWords(char* s) {
    char* t = 0;
    size_t len = strlen(s);
    t = malloc(sizeof(char*) * (1 + len));
    for (int i = 0; i < len; i++) {
        *(t + i) = *(s + len - i - 1);
    }
    *(t + len) = '\0';
    return t;
}