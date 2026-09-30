class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        seen = {}
        

        for i, value in enumerate(nums):        #iterate every number in the hashmap
            needed = target - value             #find the 2nd numbers need to add to 1rst num for target 

            if needed in seen:                  #check if that 2nd num in the Hash map
                return [seen[needed], i]
            seen[value] = i