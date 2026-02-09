class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>>m;
        for(auto ch:strs){
            string str = ch;
            
            sort(str.begin(),str.end());
            m[str].push_back(ch);
        }

        vector<vector<string>>v;
        for(auto it:m){
            v.push_back(it.second);
        }
        return v;
    }
};