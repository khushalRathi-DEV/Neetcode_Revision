class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        l , r = 0,len(numbers)-1
        while(r >= l):
          if numbers[l] + numbers[r] == target :
            return [l+1,r+1]
          elif numbers[l] + numbers[r] > target : 
            r -= 1 
          else :
            l += 1
        return []


#cpp code 
# class Solution {
# public:
#     vector<int> twoSum(vector<int>& numbers, int target) {
#       ios_base::sync_with_stdio(false);
#       cin.tie(0);cout.tie(0);

#       int l = 0,r = numbers.size()-1;
#       while(r >= l){
#         if(numbers[l] + numbers[r] == target)
#           return {l+1,r+1};
#         else if(numbers[l] + numbers[r] > target)
#           r--;
#         else 
#           l++;
#       }
#       return {};
#     }
# };


