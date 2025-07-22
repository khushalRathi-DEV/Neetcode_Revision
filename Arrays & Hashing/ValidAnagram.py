class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
      ##return sorted(s) == sorted(t)
      ##return Counter(s) == Counter(t)

      if len(s) != len(t):
        return False
      mp = {}
      for c in s:
        mp[c] = mp.get(c,0) + 1
      for c in t :
        if c not in mp or mp[c] <= 0:
          return False
        mp[c] -= 1
      return True


##cpp code
# class Solution {
# public:
#     bool isAnagram(string s, string t) {
#         if (s.size() != t.size())
#             return false;
#         map<char, int> mp;
#         for (char a : s)
#             mp[a]++;
#         for (char a : t) {
#             if (mp.find(a) == mp.end() || mp[a] == 0)
#                 return false;
#             mp[a]--;
#         }
#         return true;
#     }
# };
# // class Solution {
# // public:
# //     bool isAnagram(string s, string t) {
# //         sort(s.begin(), s.end());
# //         sort(t.begin(), t.end());
# //         return s == t;
# //     }
# // };