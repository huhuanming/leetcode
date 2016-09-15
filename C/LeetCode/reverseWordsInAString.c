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

void reverseWords(char *s) {
    int i = 0;
    char **strs;
    char *destStr;
    char *p;
    destStr = malloc(sizeof(char*) * (strlen(s) + 1));
    strs = malloc(sizeof(char**) * (strlen(s)/2));
    for (p = strtok(s, " "); p; p = strtok(NULL, " "))
    {
        strs[i] = p;
        i++;
    }
    
    *destStr = '\0';
    
    for (i = i - 1; i > -1 ; i--) {
        strcat(destStr, strs[i]);
        if (i > 0) {
            strcat(destStr, " ");
        }
        if (i == 0) {
           strcat(destStr, "\0");
        }
    }
    strcpy(s, destStr);
}
