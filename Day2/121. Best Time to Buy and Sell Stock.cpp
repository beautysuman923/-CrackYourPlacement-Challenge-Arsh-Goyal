class Solution {
public:
    /*Here the approach is to find the minimum value and
    maxm difference of the minimum value and the present day*/
    int maxProfit(vector<int>& prices) {
        int minm=INT_MAX;
        int maxm=INT_MIN;
        for(int i=0;i<prices.size();i++){
            minm=min(minm,prices[i]);
            maxm=max(maxm,abs(prices[i]-minm));
        }
        return maxm;
    }
};
