class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>>st;
        int maxa=0;
        for(int i=0;i<heights.size();i++){
            int start=i;
            while(!st.empty()&&st.top().second>heights[i]){
              maxa= max(maxa,st.top().second*(i-st.top().first));
              start=st.top().first;
              st.pop();
            }
            st.push({start,heights[i]});
        }
          while (!st.empty()) {
         maxa = max(maxa, st.top().second * ((int)heights.size() - st.top().first));
            st.pop();
        }
        return maxa;
    }
};