class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mymap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int comp=target-nums[i];
            if(mymap.count(comp))return {mymap[comp],i};
        mymap[nums[i]]=i;
        }
    return {};
    }
};