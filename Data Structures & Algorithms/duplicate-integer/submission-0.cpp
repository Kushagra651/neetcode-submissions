class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            ans[nums[i]]++;
        }
        for(auto i: ans){
            if(i.second>1) return true;
        }
        return false;
    }
};