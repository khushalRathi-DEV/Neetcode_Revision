
class Solution:
    def isPalindrome(self, s: str) -> bool:
        l = 0
        r = len(s) - 1
        while r >= l:
            if not s[l].isalnum():
                l += 1
                continue
            if not s[r].isalnum():
                r -= 1
                continue
            if s[l].lower() != s[r].lower():
                return False
            else:
                l += 1
                r -= 1
        return True

# class Solution:
#     def isPalindrome(self, s: str) -> bool:
#         s = ''.join(filter(str.isalnum, s)).lower()
#         if s == s[::-1]: return True
#         return False


#cpp code
# class Solution {
# public:
#     string toggle(string s){
#       string temp = "";
#       for(auto c : s)
#         if(isalnum(c) && c < 97)
#           temp += char(c ^ (1 << 5));
#         else if(isalnum(c) && c >= 97)
#           temp += c;
#       return temp;
#     }
#     bool ispal(string s){
#       int r = s.size()-1;
#       int l = 0;
#       while(r >= l){
#         if(s[l] != s[r])
#           return false;
#         l++;
#         r--;
#       }
#       return true;
#     }

#     bool isPalindrome(string s) {
#         ios_base::sync_with_stdio(false);
#         cin.tie(0);cout.tie(0);
#         s = toggle(s);
#         cout<<s;

#       return ispal(s);
#     }
# };

# // class Solution {
# // public:
# //     bool isPalindrome(string s) {
# //         stringstream ss(s);
# //         char x;
# //         string ans;
# //              while(ss>>x){
# //                 x=tolower(x);
# //                 if(isalpha(x)||isdigit(x))
# //                 ans+=x; 
# //             }
# //         bool hehe=true;
# //         int l=0;int r=ans.length()-1;
# //         while(r>=l){
# //             if(ans[l]!=ans[r])
# //             return false;
# //             l++;r--;
# //         }
# //     return true;
# //     }
# // };
# // class Solution {
# // public:
# //     bool isPalindrome(string s) {
# //        int start=0;
# //        int end=s.size()-1;
# //        while(start<=end){
# //            if(!isalnum(s[start])){start++; continue;}
# //            if(!isalnum(s[end])){end--;continue;}
# //            if(tolower(s[start])!=tolower(s[end]))return false;
# //            else{
# //                start++;
# //                end--;
# //            }
# //        }
# //        return true;
# // }
# // };




