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
