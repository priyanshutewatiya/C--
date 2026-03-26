#include <bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>&mat , int i , int n){
    for(int j = 0 ; j < n ;j++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>>&mat , int j , int m){
    for(int i = 0 ; i < m ;i++){
        if(mat[i][j] != 0){
            mat[i][j] = -1;
        }
    }
}
int main(){
    vector<vector<int>> mat = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}};
    int n = mat.size();
    int m = mat[0].size();

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

    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cout << mat[i][j] <<" ";
            }
            cout << endl;
    }
    return 0;
}