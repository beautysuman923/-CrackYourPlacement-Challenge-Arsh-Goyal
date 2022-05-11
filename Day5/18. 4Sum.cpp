class Solution {
public:
    /*here the approach is almost same as 3 sum but here we have to get the target as a sum,so we will use two pointers as usual and two as a binary sum that will be more efficient in order to get the target*/
    
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.empty()) return ans;
        sort(nums.begin(),nums.end());
        int sum=0,target_1=0,n=nums.size();
        for(int i=0;i<n;i++){
            int target_3=target-nums[i];
            for(int j=i+1;j<n;j++){
                int target_2=target_3-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int sum=nums[front]+nums[back];
                    if(sum<target_2) front++;
                    else if(sum>target_2) back--;
                    else{
                         vector<int> quadra(4,0);
                         quadra[0]=nums[i];
                         quadra[1]=nums[j];
                         quadra[2]=nums[front];
                         quadra[3]=nums[back];
                         ans.push_back(quadra);
                        while(front<back&&nums[front]==quadra[2]) front++;
                        while(front<back&&nums[back]==nums[3]) back--;
                    }
                
                }
                
                while(j+1<nums.size()&&nums[j+1]==nums[j]) j++;
            }
            while(i+1<nums.size()&&nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};
