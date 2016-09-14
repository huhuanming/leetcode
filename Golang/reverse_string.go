// 344. Reverse String
// Write a function that takes a string as input and returns the string reversed.

// Example:
// Given s = "hello", return "olleh".

package solutions

func ReverseString(s string) string {
	data := []rune(s)
	result := []rune{}
	for i := len(data) - 1; i >= 0; i-- {
		result = append(result, data[i])
	}
	return string(result)
}
