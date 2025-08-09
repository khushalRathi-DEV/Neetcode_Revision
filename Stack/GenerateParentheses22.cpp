class Solution {
  public:
      vector<string>ans;
      void helper(int open,int close,string curr){
        if(open == 0 && close == 0)
          ans.push_back(curr);
        if(open > 0)
          helper(open-1,close,curr+"(");
        if(close > open)
          helper(open,close-1,curr+")");
      }
      vector<string> generateParenthesis(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
  
        helper(n,n,"");
        return ans;
      }
  };  