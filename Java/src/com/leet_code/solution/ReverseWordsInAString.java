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
package com.leet_code.solution;

import java.util.Arrays;
import java.util.Collections;

/**
 * Created by hu on 16/7/30.
 */
public class ReverseWordsInAString {
    public static String reverseWordsInAString(String s){
        java.util.List<String> list = Arrays.asList(s.trim().split("\\s+"));
        Collections.reverse(list);
        return String.join(" ", list);
    }
}
