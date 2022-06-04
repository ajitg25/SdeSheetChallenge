#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> vec;
    vec.push_back({1});
    if(n==1) return vec;
    vec.push_back({1,1});
    
    for(int i =2;i<n;i++){
        vector<long long int> v;
        v.push_back(1);
        for(int j =1;j<i;j++){
            v.push_back(vec[i-1][j]+vec[i-1][j-1]);
        }
        v.push_back(1);
        vec.push_back(v);
    }
    return vec;
}
