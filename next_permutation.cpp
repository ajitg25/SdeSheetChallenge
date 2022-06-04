#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    for(int i =n-2;i>=0;i--)
        if(permutation[i]<permutation[i+1]){
            sort(permutation.begin()+i+1,permutation.end());
                auto it = upper_bound(permutation.begin()+i+1, permutation.end(), permutation[i]);
                swap(*it, permutation[i]);
                sort(permutation.begin()+i+1, permutation.end());
                return permutation;    
            }
        
        sort(permutation.begin(),permutation.end());
        return permutation;
}
