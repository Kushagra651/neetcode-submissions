class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int s=0,e=1;
        sort(nums.begin(),nums.end());
        while(e<nums.size()){
            if(nums[s]==nums[e]){
                return true;
            }
            s++;
            e++;
        }
        return false;
    }
};