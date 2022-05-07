class Solution {
public:
    /*Use two integers to count the remaining left parenthesis (n) and the right parenthesis (m) to be added.
    At each function call add a left parenthesis if n >0 and add a right parenthesis if m>0.
    Append the result and terminate recursive calls when both m and n are zero.*/
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        helper(ans,"",n,0);
        return ans;
    }
    void helper(vector<string> &v,string s,int n,int m)
    {
     if(n==0&&m==0)
     {
      v.push_back(s);
      return;
     }
      if(n>0)
      helper(v,s+"(",n-1,m+1);
      if(m>0)
       helper(v,s+")",n,m-1);   
    }
};
