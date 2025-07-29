class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
      freq = {}
      for num in nums :
        freq[num] = freq.get(num,0) + 1

      # count = 0
      ans = 0
      for num in freq : 
        if num-1 not in freq :
          count = 0
          while(num + count in freq):
            count += 1
          ans = max(ans,count)
        
      return ans

# This problem teaches that when looking for consecutive sequences, instead of checking each number and trying to build a sequence from it, we should only start building sequences from numbers that are the start of a possible sequence (i.e., num - 1 is not in the set or map). From there, we check for consecutive numbers (num + 1, num + 2, ...) and count the length. This approach avoids redundant work and achieves better time efficiency.


#cpp code
# class Solution {
# public:
#     int longestConsecutive(vector<int>& nums) {
#     unordered_set<int>s(nums.begin(),nums.end());
#     int ans=0;
#     for(auto i:s)
#     {
#     if(!s.count(i-1))
#         {
#         int len=1;
#         while(s.count(i+len))
#             ++len;
#         ans=max(len,ans);
#         }
#     }

#     return ans;
#     }
# };
# // class Solution {
# // public:
# //     int longestConsecutive(vector<int>& nums) {
# //         unordered_map<int, bool> map;
# //         for(int i = 0; i<nums.size(); i++){
# //             map[nums[i]] = true;
# //         }
# //         for(int i=0; i<nums.size(); i++){
# //             if(map.count(nums[i]-1) > 0){
# //                 map[nums[i]] = false;
# //             }
# //         }
# //         int maxlen = 0;
# //         for(int i=0; i<nums.size(); i++){
# //             if(map[nums[i]] == true){
# //                 int j=0; int count=0;
# //                 while(map.count(nums[i]+j) > 0){
# //                     j++;
# //                     count++;
# //                 }
# //                 if(count>maxlen){
# //                     maxlen = count;
# //                 }
# //             }
# //         }
# //         return maxlen;
# //     }
# // };