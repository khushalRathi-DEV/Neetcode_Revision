class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        v1 = [0] * 26
        v2 = [0] * 26
        l = 0
        k = len(s1)

        for c in s1:
            v1[ord(c) - ord("a")] += 1

        for i in range(len(s2)):
            v2[ord(s2[i]) - ord("a")] += 1
            if i >= k - 1:
                if v1 == v2:
                    return True
                v2[ord(s2[l]) - ord("a")] -= 1
                l += 1

        return False
#cpp code
# class Solution {
# public:
#     bool checkInclusion(string s1, string s2) {
#       ios_base::sync_with_stdio(false);
#       cin.tie(0);cout.tie(0);
      
#       vector<int>v1(26,0);
#       vector<int>v2(26,0);
#       int l=0;
#       for(char c : s1){
#         v1[c - 'a']++;
#       }
#       int k = s1.size();
#       for(int i=0;i<s2.size();i++){
#         v2[s2[i] - 'a']++; 
#         if(i >= k-1){
#           if(v1 == v2)
#             return true;
#           v2[s2[l] - 'a']--; 
#           l++;
#         }
#       }
#       return false;
#     }
# };