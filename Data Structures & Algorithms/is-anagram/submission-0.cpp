class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<string,int> st;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        st[s]++;
        if(st.find(t)!=st.end()){
            return true;
        }
        return false;
        
    }
};
