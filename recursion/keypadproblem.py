class Solution(object):
    def letterCombinations(self, digits):
        """
        :type digits: str
        :rtype: List[str]
        """
        def solve(index, output):
            if index >= len(digits):
                ans.append(''.join(output))

                return
            number = int(digits[index])
            value = mapping[number]
            for i in range(len(value)):
                output.append(value[i])
                solve(index+1, output)
                output.pop()

        ans = []
        index = 0
        output = []
        mapping = {2: 'abc', 3: 'def', 4: 'ghi', 5: 'jkl',
                   6: 'mno', 7: 'pqrs', 8: 'tuv', 9: 'wxyz'}
        solve(index, output)
        return ans


obj = Solution()
print(obj.letterCombinations("999"))
