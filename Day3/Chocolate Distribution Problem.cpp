 /*we can get the minimum difference by sorting the array and
    then creating a window of size m and taking the minimu*/ 
long long findMinDiff(vector<long long> a, long long n, long long m){
   
    long long minm=INT_MAX;
    sort(a.begin(),a.end());
    for(int i=0,j=m-1;i<j-m+1,j<a.size();i++,j++){
        minm=min(minm,(a[j]-a[i]));
    }
    return minm;
    }  
