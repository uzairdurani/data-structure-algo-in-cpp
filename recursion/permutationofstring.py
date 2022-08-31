class Solution(object):
    def permute(self, nums):
        def solve(index, nums):
            if index >= len(nums):
                ans.append(list(nums))
                return
            for i in range(index, len(nums)):
                nums[index], nums[i] = nums[i], nums[index]
                solve(index+1, nums)
                nums[index], nums[i] = nums[i], nums[index]

        ans = []
        index = 0
        solve(index, nums)
        return ans
