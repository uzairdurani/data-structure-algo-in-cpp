class Solution(object):
    def subsets(self,nums):
        def recursion(idx, currentSet):
            if idx == len(nums):
                results.append(currentSet)
                return
            
            #including the item at idx
            recursion(idx + 1, currentSet + [nums[idx]])
            #excluding the item at idx
            recursion(idx + 1, currentSet)
        
        # def solve(index,output,result,nums):
        #     if index >= len(nums):
        #         results.append(output)
        #         return
        #     # exclude 
        #     solve(index+1,output,result,nums)
        #     # include
        #     solve(index+1,output + [nums[index]],result,nums)
        results = []
        # output = []
        # index = 0
        recursion(0,[])
        # solve(index,output,results,nums)
        return results
            