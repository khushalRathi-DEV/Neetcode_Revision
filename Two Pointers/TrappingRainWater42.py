class Solution:
    def trap(self, height: List[int]) -> int:
      if not  height :
        return 0
      
      ans = 0
      l , r = 0,len(height)-1
      leftMax ,rightMax = height[0], height[len(height)-1]
      while(r > l) :
        if leftMax < rightMax :
          ans += leftMax - height[l]
          l += 1
          leftMax = max(leftMax,height[l])
        else : 
          ans += rightMax - height[r]
          r -= 1
          rightMax = max(rightMax,height[r])
      return ans
    
##cpp code
class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();
        if (n <= 2) return 0; 

        int left = 0, right = n - 1;
        int left_max = 0, right_max = 0;
        int ans = 0;

        while (left < right) {
            if (h[left] < h[right]) {
                if (h[left] >= left_max) {
                    left_max = h[left];
                } else {
                    ans += left_max - h[left];
                }
                left++;
            } else {
                if (h[right] >= right_max) {
                    right_max = h[right];
                } else {
                    ans += right_max - h[right];
                }
                right--;
            }
        }

        return ans;
    }
};





### 
# This problem emphasizes the importance of understanding how to use **two-pointer techniques** efficiently to solve problems involving **range-based comparisons**. The key insight is that the amount of water that can be trapped at any point depends on the **minimum of the maximum heights to its left and right**. Instead of precomputing these max values with extra space, the optimal solution tracks them dynamically using two pointers moving inward from both ends. This enables achieving **O(n) time and O(1) space** complexity, teaching an elegant approach to reduce auxiliary space through careful logic. It also reinforces the skill of translating real-world analogies (like trapping rainwater) into efficient algorithmic solutions.

