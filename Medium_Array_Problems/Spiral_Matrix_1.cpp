#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>>mat = {{1,2,3},{4,5,6},{7,8,9}};

    int n = mat.size();
    int m = mat[0].size();

    int left = 0 , right = m - 1;
    int top = 0 , bottom = n - 1;

    vector<int>result;

    while(top <= bottom && left <= right){

        for(int i = left ; i <= right ; i++){
            result.push_back(mat[top][i]);
        }
        top++;

        for(int j = top ; j <= bottom ; j++){
            result.push_back(mat[j][bottom]);
        }
        right--;

        if(top <= bottom){
            for(int j = right ; j >= left ; j--){
                result.push_back(mat[bottom][j]);
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom ; i >= top ; i--){
                result.push_back(mat[i][left]);
            }
            left++;
        }
    }

    for(int x : result){
        cout << x << " ";
    }
    return 0;
}


/*
Time: O(n*m)
Space: O(1) extra, excluding answer array
*/