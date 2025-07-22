class Solution(object):
    def containsDuplicate(self, nums):
      s = set(nums)
      return len(s) != len(nums)

      # s = set()
      # for num in nums:
      #   s.add(num)
      # return len(s) != len(nums) 


##cpp code 
# class Solution {
# public:
#     bool containsDuplicate(vector<int>& nums) {
#         return nums.size() > set<int>(nums.begin(),nums.end()).size();
#     }
# };