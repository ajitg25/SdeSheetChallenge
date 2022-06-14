#include <bits/stdc++.h> 
#include <vector>

bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
        n = mat.size();
        m = mat[0].size();
        
        int i = 0;
        int j = m-1;
        while(1){
            if(j<0 || i>=n) return false;
            if(target==mat[i][j]) return true;
            if(target<mat[i][j]){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    
}
