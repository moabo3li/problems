class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>res;
        for (int k = 0; k < nums.size() - 2; k++) {
        int i = k+1, j = nums.size() - 1;
            int comp = 0 - nums[k];
            if (k >= 1 && nums[k] == nums[k - 1])continue;
            while (i < j) {
                int sum = nums[i] + nums[j];
                if (sum == comp) {
                    res.push_back({nums[k], nums[i], nums[j]});
                    while (i<j&&nums[i]==nums[i+1])i++;
                    while (i<j&&nums[j]==nums[j-1])j--;
                    i++;
                    j--;
                } 
                else if (sum < comp) {
                    i++;
                } 
                else {
                    j--;
                }
            }
        }
        return res;
    }
};