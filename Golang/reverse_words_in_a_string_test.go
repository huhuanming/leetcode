package solutions

import "testing"

func TestReverseWordsInAString(t *testing.T) {
	strings := []string{"the sky is blue", " the sky is blue ", " the sky     is blue "}
	expected := "blue is sky the"

	for _, string := range strings {
		actual := ReverseWordsInAString(string)
		if actual != expected {
			t.Error("Test failed:", string)
		}
	}
}