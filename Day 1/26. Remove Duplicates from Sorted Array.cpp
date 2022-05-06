class Solution {
public:
    
    /*Here we have to arrange all the distinct element occuring only once and return the count and then remaining will be ignored.
    so here,the approach is that we can move one pointer ahead which will find always the different element present at index i 
    then its will assign that j position value in ith position then increase the ith pointer by one and again jth pointer will move ahead to find the different element ,
    we will reapeat the process untill t
    last*/
    
    int removeDuplicates(vector<int>& nums) {
       int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]) i++;
            nums[i]=nums[j];
        }
        return i+1;
    }
};
