/*Here we will use two pointer,in this one pointer will check if there is any non zero element then we will swap with other pointer,
and increase both pointer otherwise only one pointer will move*/

void moveZeroes(vector<int>& nums) {
    int last = 0, cur = 0;
    while(cur < nums.size()) {
        if(nums[cur] != 0) {
            swap(nums[last], nums[cur]);
            last++;
        }
        
        cur++;
    }
}
