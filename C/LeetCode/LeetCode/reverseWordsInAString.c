//
// 151. Reverse Words in a String
// Given an input string, reverse the string word by word.

// For example,
// Given s = "the sky is blue",
// return "blue is sky the".

// Update (2015-02-12):
// For C programmers: Try to solve it in-place in O(1) space.

// Clarification:
// What constitutes a word?
// A sequence of non-space characters constitutes a word.
// Could the input string contain leading or trailing spaces?
// Yes. However, your reversed string should not contain leading or trailing spaces.
// How about multiple spaces between two words?
// Reduce them to a single space in the reversed string.

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