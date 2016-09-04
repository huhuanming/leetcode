def reverseWords(s):
    """
    :type s: str
    :rtype: str
    """
    return ' '.join(s.split()[::-1]).strip()