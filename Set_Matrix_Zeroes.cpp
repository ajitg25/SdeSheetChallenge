#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    vector<vector<int>> board  = matrix;
    int n = board.size();
    int m = board[0].size();
    set<int> cl,rw;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(board[i][j]==0){
                cl.insert(j);
                rw.insert(i);
            }
        }
    }
    for(auto it=cl.begin();it!=cl.end();it++){
        for(int i =0;i<n;i++){
            matrix[i][*it] = 0;
        }
    }
    for(auto it=rw.begin();it!=rw.end();it++){
        for(int i =0;i<m;i++){
            matrix[*it][i] = 0;
        }
    }

}
