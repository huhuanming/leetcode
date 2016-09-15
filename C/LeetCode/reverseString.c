// 344. Reverse String
// Write a function that takes a string as input and returns the string reversed.

// Example:
// Given s = "hello", return "olleh".

#include "reverseString.h"

char* reverseString(char* s) {
    char* t = 0;
    size_t len = strlen(s);
    t = malloc(sizeof(char*) * (1 + len));
    for (int i = 0; i < len; i++) {
        *(t + i) = *(s + len - i - 1);
    }
    *(t + len) = '\0';
    return t;
}
