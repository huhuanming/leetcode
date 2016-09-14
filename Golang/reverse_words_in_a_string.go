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

package solutions

import (
	"strings"
	//"sort"
	"bytes"
)

func ReverseWordsInAString(s string) string {
	split := ' '
	strs := strings.Split(s, split)
	print("\n")

	var buffer bytes.Buffer
	for _, str :=range strs {
		buffer.WriteString(str)
	}

	print(strs)
	//sort.Reverse(slice)
	return s
}