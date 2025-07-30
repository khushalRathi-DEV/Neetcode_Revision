class Solution:
    def maxArea(self, height: List[int]) -> int:
        l , r =0,len(height)-1
        ans =0
        while(r > l) :
          ans = max(ans,min(height[l],height[r]) * (r-l))
          if height[l] > height[r] :
            r -= 1
          elif height[l] < height[r] :
            l += 1 
          else:
            l += 1
            r -= 1
        return ans 


# #cpp code
# class Solution {
# public:
#     int maxArea(vector<int>& height) {
#         ios_base::sync_with_stdio(false);
#         cin.tie(0);cout.tie(0);

#         int l = 0, r = height.size() - 1;
#         int ans = 0;
#         while (r > l) {
#           ans = max(ans,(r-l) * min(height[r],height[l]));
#           if(height[l] > height[r])
#             r--;
#           else if(height[l] < height[r])
#             l++;
#           else {//(height[l] == height[r] case 
#             l++;
#             r--;
#           }
#         }
#       return ans;
#     }
# };


# This problem teaches the two-pointer technique to optimize a brute-force approach. The goal is to find the maximum area formed by two lines and the x-axis. Instead of checking all pairs (which would take O(n²)), we start with two pointers at both ends and move the pointer with the smaller height, hoping to find a taller line that might form a larger area. This greedy, linear-time approach (O(n)) takes advantage of the fact that the width decreases with each pointer movement, so to maximize area, we must increase the height. It’s a classic example of trading off width for potential height gains while maintaining optimal efficiency.