class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
         unordered_map<char, char> par = {
            {')', '('},
            {']', '['},
            {'}', '{'},
        };
        for(const auto &c:s){
            if(par.find(c)!=par.end())
           { 
            if(st.empty())return false;

            if(st.top()!=par[c])return false;

            st.pop();

            }else st.push(c);
        }
        return st.empty();
    }
};