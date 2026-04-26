class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> grouper;
        for(string s : strs){
            string key = s;
            sort(key.begin(),key.end());
            grouper[key].push_back(s);
        }
        vector<vector<string>> ans;
        for( auto it : grouper){
            ans.push_back(it.second);
        }
        return ans;
    }
};