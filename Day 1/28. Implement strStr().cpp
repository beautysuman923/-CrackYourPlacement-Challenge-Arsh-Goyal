class Solution {
public:
    
    int strStr(string haystack, string needle) {
        if(needle=="") return 0;//if the substring which is to be found is empty
        int found=haystack.find(needle);//it will return the index of the first occourence of substring
        if(found!=string::npos) return found;//if substring is not present it will give npos
        else return -1;
    }
};
