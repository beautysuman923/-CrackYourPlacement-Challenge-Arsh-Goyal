class Solution {
public:
  /*with the help of map we can easily get the difference of the target and other number ,
  which means that two number will be the sum ,
  if difference is not there we can simply store the value in map with its corresponding value for later use*/
    
   vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if(m.find(target-nums[i])!=m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
            }
            else
                m[nums[i]]=i;
        }
       return v;
   }
       
};
