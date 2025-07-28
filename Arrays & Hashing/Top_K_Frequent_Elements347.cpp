class Solution {
  public:
      vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);cout.tie(0);
  
        unordered_map<int,int>m1;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0;i < nums.size();i++){
          m1[nums[i]]++;
        }
        for(auto it : m1){
          pq.push({it.second,it.first});
          if(pq.size() > k)
            pq.pop();
        }
      vector<int>ans;
      while(!pq.empty()){
        auto temp = pq.top();
        pq.pop();
        ans.push_back(temp.second); 
      }
      return ans;
      }
  };