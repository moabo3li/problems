class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numb(nums.begin(),nums.end());
        int longest=0;
        for(int n:numb)
        {
            if(numb.find(n-1)==numb.end()){
            int l=1;
            while(numb.find(n+l)!=numb.end()){
                l++;
            }
            longest=max(l,longest);
            }
        }
        return longest;
    }
};