class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
      l,currsum,ans=0,0,float('inf')
      for r in range(len(nums)) :
        currsum += nums[r]
        #print(currsum)
        while(currsum >= target) :
          ans = min(ans,r-l+1)
          currsum -= nums[l]
          l +=1
      return ans if float('inf') != ans else 0
          

#cpp code
# // class Solution {
# // public:
# //     int minSubArrayLen(int target, vector<int>& nums) {
# //         int l = 0; 
# //         int sum = 0; 
# //         int ans = INT_MAX;
# //
# //         for (int r = 0; r < nums.size(); r++) {
# //             sum += nums[r];      
# //             while (sum >= target) {
# //                 ans = min(ans, r - l + 1); 
# //                 sum -= nums[l];  
# //                 l++; 
# //             }
# //         }
# //         return ans == INT_MAX ? 0 : ans;
# //     }
# // };

