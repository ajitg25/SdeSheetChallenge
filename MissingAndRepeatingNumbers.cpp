#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	sort(arr.begin(),arr.end());
    vector<int> v;
    long long repeat =0;
    long long sum = (n*(n+1))/2;

    long long Asum = arr[0];
    for(long long i =1;i<n;i++){
        if(arr[i]==arr[i-1]){
            repeat = arr[i];
        }
        Asum+=arr[i];
    }
    long long missing = sum-Asum+repeat;
    return {(int)missing,(int)repeat};
}
