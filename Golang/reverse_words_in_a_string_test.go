package solutions

import "testing"

func TestReverseWordsInAString(t *testing.T) {
	strings_1 := []string{"the sky is blue", " the sky is blue ", " the sky     is blue "}
	expected := "blue is sky the"

	for _, string := range strings_1 {
		actual := ReverseWordsInAString(string)
		if actual != expected {
			t.Error("Test failed:", string, ":", actual, ",", expected)
		}
	}

	strings_2 := []string{"the sky is so blue", " the sky is    so blue ", " the sky     is  so blue "}
	expected_2 := "blue so is sky the"

	for _, string := range strings_2 {
		actual := ReverseWordsInAString(string)
		if actual != expected_2 {
			t.Error("Test failed:", string, ":", actual, ":", expected_2)
		}
	}
}
