// 344. Reverse String
// Write a function that takes a string as input and returns the string reversed.

// Example:
// Given s = "hello", return "olleh".

package com.leet_code.solution;

public class ReverseString {
    public static String reverseString(String s) {
        return new StringBuilder(s).reverse().toString();
    }
}
