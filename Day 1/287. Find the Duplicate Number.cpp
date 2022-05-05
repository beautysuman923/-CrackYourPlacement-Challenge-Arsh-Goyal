
Approach1:
class Solution {
public:
    /*To get the repeated element,we can simply store the count of each element using map
    and then iterate the map then if we get a count greater than 1,then that is the answer*/
    
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int ans=0;
        for(int i=0;i<nums.size();i++) 
            m[nums[i]]++;
        for(auto i:m) 
            if(i.second>1) {ans=i.first; break;}
        
        return ans;
    }
};



Approach2:
class Solution {
public:
    /*In this problem,we can use tortoise approach as by using this we can first form a cycle in one go and
        then we can we can again find the junction point of two pointers slow and fast which will give the element which is a repeating element*/
    //Note:slow always go one step at a time 
    //and fast always go two step at a time
        
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0],fast=nums[nums[0]];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        slow=0;
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};
