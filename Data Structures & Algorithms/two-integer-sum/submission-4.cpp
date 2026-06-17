class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       unordered_map<int,int> mp;
       for(int i=0;i<nums.size();i++){
        int differ = target-nums[i];
        if(mp.find(differ)!=mp.end()){
            return{mp[differ],i};
        }
        mp[nums[i]]=i;
       }
       return {};
    }
};
