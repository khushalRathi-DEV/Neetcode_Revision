class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
      mp = defaultdict(list)
      for word in strs:
        temp = ''.join(sorted(word))
        mp[temp].append(word)
      
      return list(mp.values())
        
##cpp code 
# class Solution {
# public:
#     vector<vector<string>> groupAnagrams(vector<string>& strs) {
#       ios_base::sync_with_stdio(false);
#       cin.tie(0);cout.tie(0);
#         vector<string>sorted_str;
#         for(int i=0;i<strs.size();i++){
#           string temp = strs[i];
#           sort(temp.begin(),temp.end());
#           sorted_str.push_back(temp);
#         }

#         unordered_map<string,vector<string>>m1; 
#         for(int i=0;i<strs.size();i++){
#           // vector<string>temp;
#           // temp
#           m1[sorted_str[i]].push_back(strs[i]);
#         }
#         vector<vector<string>>ans;
#         for(auto &it : m1){
#           ans.push_back(it.second);
#         }
#       return ans;
#     }
# };

