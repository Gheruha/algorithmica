# Problem 28: Find the Index of the First Occurrence in a String.
# @leet imports start
# @leet imports end

# @leet start
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:

        start = -1
        for i in range(len(haystack)):
            if needle[0] == haystack[i]:
                if needle == haystack[i : i + len(needle)]:
                    start = i
                    break
        return start


# @leet end

