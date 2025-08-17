class Solution {
  public:
      vector<int> dailyTemperatures(vector<int>& temperatures) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        
        stack<pair<int,int>>st;
        int n = temperatures.size(); 
        vector<int>ans;
        for(int i=n-1;i >= 0;i--){
          while(!st.empty() && st.top().first <= temperatures[i]){
            st.pop();
          }
          if(st.empty())
            ans.push_back(0);
          else
            ans.push_back(st.top().second - i);
          st.push({temperatures[i],i});
        }
        reverse(ans.begin(),ans.end());
        return ans;
      }
  };