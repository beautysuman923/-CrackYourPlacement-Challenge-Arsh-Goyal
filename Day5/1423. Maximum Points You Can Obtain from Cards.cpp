class Solution {
public:
    /*the approach is to consider all the k elements according to the given rule and
    storing the max sum value accordingly*/
    int maxScore(vector<int>& cardPoints, int k) {
        int sum=0,ans=0,n=cardPoints.size();
        for(int i=0;i<k;i++) sum+=cardPoints[i];
        ans=sum;
        int l=k-1,r=n-1;
        while(k--){
            sum-=cardPoints[l];
            sum+=cardPoints[r];
            l--;
            r--;
            ans=max(ans,sum);
        }
        return ans;
    }
};
