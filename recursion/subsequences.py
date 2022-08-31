from unittest import result


class Solution(object):
    def subsets(self, nums):
        def recursion(idx, currentSet):
            if idx == len(nums):
                print(currentSet)
                results.append(currentSet)
                return

            # including the item at idx
            recursion(idx + 1, currentSet + nums[idx])
            # excluding the item at idx
            recursion(idx + 1, currentSet)

        results = []
        # output = []
        # index = 0
        recursion(0, '')
        return results


obj = Solution()
print(obj.subsets('abc'))
