class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int st=0,et=0;
        if(s.length()!=t.length()) return false;
        while(st<s.length()){
            if(s[st]!=t[et]){
                return false;
            }
            st++;
            et++;
        }
        return true;
        
    }
};
