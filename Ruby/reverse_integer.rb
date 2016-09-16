# 7. Reverse Integer  QuestionEditorial Solution  My Submissions
# Total Accepted: 166072
# Total Submissions: 698816
# Difficulty: Easy
# Reverse digits of an integer.

# Example1: x = 123, return 321
# Example2: x = -123, return -321

# Have you thought about this?
# Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

# If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

# Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

# For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

# @param {Integer} x
# @return {Integer}
def reverse(x)
  abs = 1
  abs = -1 if x < 0
  r = x.to_s.reverse.to_i
  return 0 if r > 2_147_483_647
  r * abs
end
