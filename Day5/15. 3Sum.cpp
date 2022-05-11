class Solution {
public:
    /*Here we will use three pointer approach,one pointer will be placed on starting which will vary from 0 to n-2 and second pointer will be at 
    one step ahead of i and j will be at last,so if the sum of all three will be greater than 0 means we have to reduce the value so will move rightmost pointer leftside and to reduce the duplicate operation we will move i and j ahead till we'll get different value*/
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
         int sum=0,n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<3) return {};
        for(int i=0;i<n-2;i++){
            if(i==0||nums[i]!=nums[i-1]){
                int j=i+1,k=n-1;
                while(j<k){
                    sum=nums[i]+nums[j]+nums[k];
                    if(sum==0){
                        ans.push_back({nums[i],nums[j],nums[k]});
                        while(j<k&&nums[j]==nums[j+1]) j++;
                         while(j<k&&nums[k]==nums[k-1]) k--;
                    }
                    if(sum>0) k--;
                    else j++;
                }
            }
        }
        return ans;
    }
};
