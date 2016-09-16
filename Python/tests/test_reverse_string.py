import unittest
from reverse_string import Solution

class ReverseString(unittest.TestCase):
    def setUp(self):
        pass
            
    def tearDown(self):
        pass

    def testReverseString(self):
        self.assertEqual(Solution().reverseString('hello!'), '!olleh')
