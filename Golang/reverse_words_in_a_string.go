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
)

func swap(str1, str2 *string) {
	*str1, *str2 = *str2, *str1
}

func ReverseWordsInAString(s string) string {
	strs := strings.Fields(s)
	length := len(strs)
	for i := 0; i < length/2; {
		swap(&strs[i], &strs[length-1-i])
		i++
	}
	return strings.Join(strs, " ")
}
