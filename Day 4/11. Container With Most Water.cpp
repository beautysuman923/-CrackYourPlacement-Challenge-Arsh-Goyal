class Solution {
public:
    /*The approach is we will keep storing the max of water contained and we will keep shifting the two pointer according to the lower height value*/
    
    int maxArea(vector<int>& height) {
        int water=0,left=0,right=height.size()-1;
        while(left<right){
            water=max(water,min(height[left],height[right])*(right-left));
            if(height[left]<height[right]) left++;
            else if(height[left]>height[right]) right--;
             else left++;
        }
        return water;
    }
};
