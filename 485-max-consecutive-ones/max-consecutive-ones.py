class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        maxi = 0
        i=0
        count =0
        while i<len(nums):
            if nums[i]==1:
                count+=1
                
            else:
                
                count=0
            maxi = max(maxi,count)
            i+=1
        return maxi
            
        