class Solution {
public:
    /*Here the simple approach is that ,if we will do sorting we will get unique value for all the anagrams 
    corresponding to that as a key we can store all the anagram at a place*/
    
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(string s: strs){
            string t=s;
            sort(t.begin(),t.end());
            mp[t].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto i:mp) ans.push_back(i.second);
        return ans;
    }
};
