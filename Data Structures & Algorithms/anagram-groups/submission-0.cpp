class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        for(auto i: strs){
            string key = i;
            sort(key.begin(),key.end());
            ans[key].push_back(i);
        }

        vector<vector<string>> res;
        for(auto it: ans){
            res.push_back(it.second);
        }
        return res;
    }
};
