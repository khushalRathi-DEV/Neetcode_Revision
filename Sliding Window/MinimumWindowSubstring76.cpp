class Solution {
  public:
      bool isvalid(vector<int>freqs,vector<int>freqt){
        for(int i=0;i<=57;i++){
          if(freqs[i] < freqt[i])
            return false;
        }
        return true;
      }
      string minWindow(string s, string t) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
        if (t.empty() || s.empty() || s.size() < t.size()) 
          return "";
        if(s == t)
          return s;
        int  l = 0;
        vector<int>freqs(58,0);
        vector<int>freqt(58,0);
        for(auto c:t)
          freqt[c-'A']++;
        string ans = "";
        //ans += "hii";
        string curr = "";
        for(int r =0;r<s.size();r++){
          curr += s[r];
          freqs[s[r] - 'A']++; 
          while(isvalid(freqs,freqt) && r >= l){
            //string curr = s.substr(l,r-l+1);//check this
            //cout<<l<<" "<<r<<" : ";
            //cout<<ans.size()<<" "<<curr.size()<<endl;
            if(ans.size() > curr.size() || ans == "")
              ans = curr;
            //cout<<ans<<endl;
            freqs[s[l] - 'A']--;
            l++;
            curr.erase(0,1);
          }
        } 
        return ans;
      }
  };