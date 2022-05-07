class Solution {
public:
    /*we can get the maximum profit by taking sum of every positive profit*/
    int maxProfit(vector<int>& prices) {
        int sum=0;
        for(int i=1;i<prices.size();i++){
            sum+=max(prices[i]-prices[i-1],0);
        }
        return sum;
    }
};
