class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
      l,ans=0,float('-inf')
      st = set()
      for r in range(len(s)) :
        st.add(s[r])
        while (r-l+1) > len(st) :
          st.discard(s[l]) 
          l += 1  
        ans = max(ans,r-l+1)
      return ans   

# class Solution:
#     def lengthOfLongestSubstring(self, s: str) -> int:
#         l = 0
#         ans = 0
#         st = set()
        
#         for r in range(len(s)):
#             while s[r] in st:
#                 st.remove(s[l])
#                 l += 1
#             st.add(s[r])
#             ans = max(ans, r - l + 1)
        
#         return ans

#cpp code
# class Solution {
# public:
#     int lengthOfLongestSubstring(string s) {
#     int l=0,r=0,ans=0;
#     set<char> st;
#     while(r<s.size())
#     {
#     if(!st.count(s[r]))
#         {
#         st.insert(s[r]);
#         r++;
#         }
#     else{
#         st.erase(s[l]);
#         l++;
#         continue;
#     }
#     ans=max(ans,r-l);
#     } 
#     return ans;
#     }
# };