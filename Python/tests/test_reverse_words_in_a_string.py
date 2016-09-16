import unittest
from reverse_words_in_a_string import Solution


class ReverseString(unittest.TestCase):

    def setUp(self):
        pass

    def tearDown(self):
        pass

    def testReverseString(self):
        strings = [
            'the sky is blue',
            ' the sky is blue ',
            ' the sky     is blue '
        ]

        for string in strings:
            self.assertEqual(Solution().reverseWords(string), 'blue is sky the')
