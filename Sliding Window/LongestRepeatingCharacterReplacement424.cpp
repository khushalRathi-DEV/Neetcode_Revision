class Solution {
  public:
      int characterReplacement(string s, int k) {
          ios_base::sync_with_stdio(false);
          cin.tie(0);cout.tie(0);
  
          unordered_map<char,int>mp;
          int maxfreq = 0,l = 0,ans = 0;
          for(int r=0;r<s.size();r++){
            mp[s[r]]++;
            maxfreq = max(maxfreq, mp[s[r]]);
            if((r-l+1) - maxfreq <= k)
              ans = max(ans,r-l+1);
            else{
              mp[s[l]]--;
              l++;
              for(auto it : mp)
                maxfreq = max(maxfreq,it.second);
            } 
          }
          return ans;
      }
  };