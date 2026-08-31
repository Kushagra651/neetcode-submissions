class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(auto i: nums)mpp[i]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto i: mpp){
            int num = i.first;
            int freq = i.second;
            if(pq.size()<k){
                pq.push({freq,num});
            }
            else if(freq>pq.top().first){
                pq.pop();
                pq.push({freq,num});
            }
        }
        vector<int> ans;
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        }
};
