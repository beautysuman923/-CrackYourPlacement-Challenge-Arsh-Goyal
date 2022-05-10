class solution
{
    public:
    //Function to find the smallest window in the string s consisting
    string minWindow(string s, string t) {
       unordered_map<char,int> mp;
     for(char i:t)
        mp[i]++;  //unordered map for storing the characters in t that we need to check for in s
 int i=0,j=0,start=0,len=INT_MAX,count=mp.size();
    while(j<s.size()){
        if(mp.find(s[j]) != mp.end()){
            mp[s[j]]--;  // remove that digit from map
            if(mp[s[j]] == 0)  // all occ of that digit is zero means. reduce the count
                count--;
           }  
   while(count==0){    //if count zero means every word of t is covered in s      
     if(mp.find(s[i]) != mp.end()){ // remove unnecessary length from forward
          mp[s[i]]++;
         if(mp[s[i]] > 0) //also increement the count 
           count++;       
           if(j-i+1 < len){ // select minimum length
              start=i;
              len=j-start+1;
            }
      }
       i++;
  }
        j++;
 } 
        return (len==INT_MAX)?"":s.substr(start,len);
}
};
