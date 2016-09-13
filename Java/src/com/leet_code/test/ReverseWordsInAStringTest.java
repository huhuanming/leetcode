package com.leet_code.test;

import com.leet_code.solution.ReverseWordsInAString;
import org.junit.Assert;

import java.util.ArrayList;
import java.util.List;

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
            Assert.assertEquals("blue is sky the", ReverseWordsInAString.reverseWordsInAString(string));
        });
    }
}