class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        vector<vector<string>>ans;
        if(strs.empty()) return ans;
        for(auto st:strs)
        {
            vector<int> count(26,0);
            for(char &c:st)
            {
                count[c-'a']++;
            }
            string key;
            for(int &n:count)
            {
                key+="#"+to_string(n);
            }
            mp[key].push_back(st);
        }
        for(auto &i:mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};