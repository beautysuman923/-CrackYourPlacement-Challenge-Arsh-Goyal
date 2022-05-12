class Solution {
public:
    /*Here we can store each word in a vector and can reverse it at last,then we will add all the word as a string in the 
    result with a space in front and then we will erase the space at first and we got the required result*/
    
    string reverseWords(string s) {
        vector<string> vec;
        stringstream str(s);
        string word;
        while (str >> word) // store separated words in vector
            vec.push_back(word);
        
        reverse(vec.begin(), vec.end()); // reverse vector
        
        string res;
        for (auto it : vec) // concatenate strings
            res+=" "+it;
        res.erase(0,1); // first place is always a space - extra
        
        return res;
    }
};
