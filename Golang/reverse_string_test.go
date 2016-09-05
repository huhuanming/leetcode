package solutions

import "testing"

func TestReverseString(t *testing.T) {
	expected := "olleh"
	actual := ReverseString("hello")
	if actual != expected {
		t.Error("Test failed")
	}
}
