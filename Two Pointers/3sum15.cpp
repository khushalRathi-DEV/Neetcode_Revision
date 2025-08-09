class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size();i++){
          if(i > 0 && nums[i] == nums[i-1])
            continue;
          int l = i+1,r = nums.size()-1;
          while(r > l){
            int sum = nums[i] + nums[l] + nums[r];
            if(sum > 0)
              r--;
            else if(sum < 0)
              l++;
            else{
              ans.push_back({nums[i],nums[l],nums[r]});
              l++;
              r--;
              while(r > l && nums[l] == nums[l-1])
                l++;
              while(r > l && nums[r] == nums[r+1])
                r--;
            }
          }
        }
        return ans;
    }
};