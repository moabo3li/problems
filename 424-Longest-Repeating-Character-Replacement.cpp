class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>count;
        int maxc=0;
        int l=0;
        int len=0;
        int res=0;
        for(int r=0;r<s.size();r++){
            count[s[r]]++;
            maxc=max(maxc,count[s[r]]);
            len++;
            if(len-maxc<=k){
                res=max(res,len);
            }else{
                count[s[l++]]--;
                len--;
            }

        }
        return res;
    }
};