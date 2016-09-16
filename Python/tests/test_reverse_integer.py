import unittest
from reverse_integer import Solution

class ReverseInteger(unittest.TestCase):
    def setUp(self):
        pass
            
    def tearDown(self):
        pass

    def testReverseString(self):
        self.assertEqual(Solution().reverse(4321), 1234)
        self.assertEqual(Solution().reverse(-4321), -1234)
        self.assertEqual(Solution().reverse(1000), 1)
        self.assertEqual(Solution().reverse(1563847412), 0)
        self.assertEqual(Solution().reverse(-1563847412), 0)
