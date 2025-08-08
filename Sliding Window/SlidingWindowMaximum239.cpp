class Solution {
  public:
      vector<int> maxSlidingWindow(vector<int>& nums, int k) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
          vector<int>ans;
          deque<int>dq;
          for(int r=0;r<nums.size();r++){
            if(!dq.empty() && r-k >= dq.front())
              dq.pop_front();
            while(!dq.empty() && nums[dq.back()] <= nums[r])
              dq.pop_back();
  
            dq.push_back(r);
  
            if(r >= k-1)
              ans.push_back(nums[dq.front()]);
          }
          return ans;
      }
  };