
    class Solution {
public:
        /*here we have to find the all the duplicate element present in the array,
        so we can easily solve this by using unordered_map but here we will be using more effiecient approach that is
        ,here we will make a number negative when reach once and again when we find any number again ,it mean that it is repeating element*/
        
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        
        for (int i = 0; i < n;i++) {
            int num = abs(nums[i]);

            if (nums[num-1] < 0) res.push_back(num);
            else nums[num-1] *= -1;
        }
        
        return res;
    }
};
