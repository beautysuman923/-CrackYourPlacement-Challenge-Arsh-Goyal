class Solution {
public:
    /*The idea is to check the required integer from the greater value of required roman,if the number itself becomes greater then subtract the number from the roman value and append roman into string,repeat this process until integer becomes zero*/
    
    int Integer[13]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string roman[13]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    string intToRoman(int num) {
        string ans="";
        for(int i=0;i<13;i++){
            int value=Integer[i];
            while(num>=value){
                ans+=roman[i];
                num-=value;
            }
        }
        return ans;
    }
};
