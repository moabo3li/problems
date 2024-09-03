class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size()),pre(nums.size()),post(nums.size());
        pre[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            pre[i]=pre[i-1]*nums[i-1];
        }
        post[nums.size()-1]=1;
        for(int i=nums.size()-2;i>=0;i--)
        {
            post[i]=post[i+1]*nums[i+1];
        }
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=pre[i]*post[i];
        }
        return ans;
    }
};