class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
      mp = {}
      for i,num in enumerate(nums):
        if(target - num) in mp:
          return [i,mp[target - num]]
        mp[num] = i
      return []

      # mp = {}
      # i = 1
      # for num in nums:
      #   if (target - num) in mp :
      #     return [i-1,mp[target - num] - 1]
      #   mp[num] = i
      #   i += 1
      # return []


#cpp code 
# class Solution {
# public:
#     vector<int> twoSum(vector<int>& nums, int target) {
#         ios_base::sync_with_stdio(false);
#         cin.tie(0);cout.tie(0);
#         unordered_map<int,int>mp;
#         int i = 1;
#         for(int num : nums){
#           if(mp[target - num])
#             return {i-1,mp[target - num]-1};
#           mp[num] = i++;
#         }
#         return {};
#     }
# };