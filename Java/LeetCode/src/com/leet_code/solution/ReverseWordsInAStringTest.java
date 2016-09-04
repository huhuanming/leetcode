package com.leet_code.solution;

import java.util.ArrayList;
import java.util.List;

import static org.junit.Assert.assertEquals;

/**
 * Created by hu on 16/7/30.
 */
public class ReverseWordsInAStringTest {

    @org.junit.Before
    public void setUp() throws Exception {

    }

    @org.junit.After
    public void tearDown() throws Exception {

    }

    @org.junit.Test
    public void testreverseWordsInAString() throws Exception {
        List<String> strings = new ArrayList<>();
        strings.add("the sky is blue");
        strings.add(" the sky is blue ");
        strings.add(" the sky     is blue ");

        strings.stream().forEach((string)->{
            assertEquals("blue is sky the", ReverseWordsInAString.reverseWordsInAString(string));
        });
    }
}