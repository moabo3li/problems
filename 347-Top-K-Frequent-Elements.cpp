class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        vector<vector<int>>freq(nums.size()+1);
        for(int &i:nums)
        {
            map[i]++;
        }
        for(const auto &i:map)
        {
            freq[i.second].push_back(i.first);
        }
        vector<int>ans;
        for(int i=freq.size()-1;i>0;i--)
        {
            for(const auto &j:freq[i])
            {
                ans.push_back(j);
                if(ans.size()==k)return ans;
            }
            
        }
        return ans;
    }
};