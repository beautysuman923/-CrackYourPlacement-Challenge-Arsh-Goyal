class Solution {
public:
    /*here we will take the prefix sum and keep finding its modulus and if we will 
    take the count of each remainder and the point is that between two same remainder whatever element will be come
    that will be the multiple of k,so we will keep counting the total number of subarray also*/
    
   int subarraysDivByK(vector<int>& A, int K) {
        vector<int> count(K);
        count[0] =1;
        int prefix = 0, res = 0;
        for (int a : A) {
            prefix = (prefix + a % K + K) % K;
            res += count[prefix];
                count[prefix]++;
        }
        return res;
    }
};
