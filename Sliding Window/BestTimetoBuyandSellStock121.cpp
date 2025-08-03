class Solution {
  public:
      int maxProfit(vector<int>& p) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
          int ans = 0;
          int currmax = INT_MIN;
          for(int i = p.size()-1; i >= 0; i-- ){
              currmax = max(currmax,p[i]);
              ans = max(ans,currmax - p[i]);
          }
      return ans;
      }
  };
  
  // class Solution {
  // public:
  //     int maxProfit(vector<int>& prices) {
  //         ios_base::sync_with_stdio(false);
  //         cin.tie(0;cout.tie(0);
  //         int currmin = INT_MAX;
  //         int ans =0;
  //         for(int i=0;i<prices.size();i++){
  //           if(prices[i] < currmin)
  //             currmin = prices[i];
  //           ans = max(ans,prices[i]-currmin);
  //         }
  //         return ans;
  //     }
  // };