class Solution {
public:
    /*we haveto check that after removing atmost one charachter from the string are we getting the palindrome,
    so the approach is that we will use two pointer one from left and one from right and if at any points it get differnet 
    we check for two condition by skipping the left one place ahead or by decreasing right pointer by one,after that we continued the same and will return true*/
    
    bool validPalindrome(string s) {
       int left=0,right=s.size()-1;
        while(left<right){
            if(s[left]!=s[right]) 
                return ispalin(s,left+1,right)||ispalin(s,left,right-1);
            left++;
            right--;
        }
        return true;
    }
    bool ispalin(string s,int left,int right){
        while(left<right){
            if(s[left]!=s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
