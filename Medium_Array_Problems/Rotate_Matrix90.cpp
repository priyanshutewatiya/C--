#include<bits/stdc++.h>
using namespace std;

void rotate90(vector<vector<int>>& mat, int n){
    //transpose of a matrix
    for(int i = 0 ; i < n ;i++){
        for(int j = i + 1 ; j < n; j++){
            swap(mat[i][j] , mat[j][i]);
        }
    }
    //reverse rows in a matrix
    for(int i = 0 ; i < n ;i++){
        reverse(mat[i].begin() , mat[i].end());
    }
}

int main(){
    vector<vector<int>> mat = {
        {4, 3, 6},
        {5, 2, 1},
        {8, 9, 7}};

    int n = mat.size();
    int m = mat[0].size();

    rotate90(mat,n);

    for(int i = 0; i < n ;i++){
        for(int j = 0 ; j < n ;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}



/*****************BRUTE FORCE APPROACH **************************
 *  
 void rotate90(vector<vector<int>>& mat , int n)
 {
    vector<vector<int>> ans(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][n - 1 - i] = mat[i][j];
        }
    }

    mat = ans;
} 

Time and Space Complexity
Time: O(n^2)
Space: O(n^2) because of extra matrix
*/
