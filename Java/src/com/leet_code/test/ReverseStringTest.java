package com.leet_code.test;

import com.leet_code.solution.ReverseString;

import static org.junit.Assert.*;

/**
 * Created by hu on 16/7/30.
 */
public class ReverseStringTest {

    @org.junit.Before
    public void setUp() throws Exception {

    }

    @org.junit.After
    public void tearDown() throws Exception {

    }

    @org.junit.Test
    public void testReverseString() throws Exception {
        assertEquals(ReverseString.reverseString("hello"), "olleh");
    }
}