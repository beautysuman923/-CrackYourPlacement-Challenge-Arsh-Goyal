class Solution {
public:
    /*In this problem we'll return true if the string contains all the pairs of the same bracket
    so using stack will be the efficient approach here,so first we will check whether the stack is non empty and then 
    if we are getting closed bracket in the string,we will compare the top value of the stack with the string,if the top value will have open bracket of the same type in the stack ,we can pop the element.so we will repeat this method for the whole string and if at last the stack will get empty then it means all the open bracket got matched with the succeding closed bracket*/
    
    bool isValid(string s) {
        stack<char> st;
        if(s.size()<=1) return false;//atleast two brackets are required to proceed
       for(int i=0;i<s.size();i++){
               if(!st.empty() and s[i]==')' and st.top()=='(')
                    st.pop();
               else if(!st.empty() and s[i]=='}' and st.top()=='{')
                     st.pop();
               else if(!st.empty() and s[i]==']' and st.top()=='[')
                      st.pop();
          
           
           else{
               st.push(s[i]);//if we'll push the element in the begining it will give error
           }
         
       }
        if(st.empty()==true) return true;
        else return false;
    }
};
