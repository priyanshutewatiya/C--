#include <bits/stdc++.h>
using namespace std;


int main(){
    vector<vector<int>> mat = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};
    int n = mat.size();
    int m = mat[0].size();

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << mat[i][j] <<" ";
            }
            cout << endl;
    }
    return 0;
}

/* BRUTE FORCE APPROACH 

void markRow(vector<vector<int>>&mat , int i , int m){
    for(int j  = 0 ; j < m ; j++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>>&mat , int j , int n){
    for(int i  = 0 ; i < n ; i++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}

for (int i = 0; i < n; i++){
        for(int j = 0 ; j < m ;j++){
            if(mat[i][j] == 0){
                markRow(mat , i ,m);
                markCol(mat , j , n);
            }
        }
    }
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == -1) {
                    mat[i][j] = 0;
                }
            }
    }
O((m*n) * (m+n)) ,  O(1)

********** BETTER APPROACH *****

    
    vector<int>row(n,0);
    vector<int>col(m,0);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ;j++){
            if(mat[i][j] == 0){
                row[i] = 1;
                col[i] = 1;
            }
        }
    }
    // Step 2: set matrix cell to zero if its row or col is marked
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             if (row[i] == 1 || col[j] == 1) {
               mat[i][j] = 0;
           }
        }
    }
T.C = O(m*n)  , S.C = O(m+n)

***************** OPTIMAL APPROACH *********************


*/