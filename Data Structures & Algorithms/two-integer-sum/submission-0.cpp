class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];
            if(mpp.find(rem)!=mpp.end()){
                vector<int> temp = {mpp[rem],i};
                return temp;
            }
            mpp[nums[i]] = i;
        }
    }
};
