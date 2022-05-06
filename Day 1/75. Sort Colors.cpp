class Solution {
public:
    /*Here we have to basically sort the given array consisting of 3 different element,so we will keep our 
    one pointer to the left to track samllest number and one pointer right to track greatest number,
    if we get any 0 we can swap up with left and increase the left pointer and when we get any 2 we can swap that with right pointer and decrease the pointer by 1,hence by arranging 0 and 2 at its place our array will be sorted*/
    
   void sortColors(vector<int>& nums) {
       int left=0,right=nums.size()-1;
       for(int i=0;i<size(nums) and i<=right;i++){
           if(nums[i]==0) 
               swap(nums[i],nums[left++]);
           else if(nums[i]==2)
               swap(nums[i--],nums[right--]);
       }
   }
};
