class Solution {
public:
bool isAnagram(string s, string t) {
    unordered_map<char, int>mymap;
    for (char i : s) {
        mymap[i]++;
    }
    for (char i : t) {
        if (mymap[i] == 0)return false;
        mymap[i]--;
    }
    for(auto x:mymap)
    {
        if (x.second)return false;
    }
     return true;
    
}
};