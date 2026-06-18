class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> ans;
    unordered_map<string,vector<string>> mpp;
    for(auto i: strs){
        string temp = i;
        sort(temp.begin(),temp.end());
        // if(mpp.find(temp)==mpp.end()){
        //     vector<string> tem;
        //     tem.push_back(i);
        // }
        mpp[temp].push_back(i);
    }
    for(auto i:mpp){
        ans.push_back(i.second);
    }
    return ans;
    }
};
