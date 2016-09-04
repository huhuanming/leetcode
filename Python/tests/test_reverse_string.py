import unittest
from reverse_string import reverseString

class ReverseString(unittest.TestCase):
    def setUp(self):
        pass
            
    def tearDown(self):
        pass

    def testReverseString(self):
        self.assertEqual(reverseString('hello!'), '!olleh')
