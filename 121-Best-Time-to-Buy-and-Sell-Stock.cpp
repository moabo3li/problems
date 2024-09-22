class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int buy=0,sell=1,maxa=0;
       while(sell!=prices.size()){
        if(prices[buy]>=prices[sell]){
            buy=sell;
        }else {
            maxa=max(maxa,prices[sell]-prices[buy]);
        }
        sell++;
       }
        return maxa;
    }
};