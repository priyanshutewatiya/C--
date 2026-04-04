#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 3;

    int left = 0 , right = n - 1;
    int top = 0 , bottom = n - 1;

    vector<vector<int>>result(n , vector<int>(n,0));

    int num = 1;

    while(top <= bottom && left <= right){

        for(int i = left ; i <= right ; i++){
            result[top][i] = num;
            num++;
        }
        top++;

        for(int j = top ; j <= bottom ; j++){
            result[j][right] = num;
            num++;
        }
        right--;

        if(top <= bottom){
            for(int j = right ; j >= left ; j--){
                result[bottom][j] = num;
                num++;
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom ; i >= top ; i--){
                result[i][left] = num;
                num++;
            }
            left++;
        }
    }

    for(int i = 0; i < n ;i++){
        for(int j = 0 ; j < n ;j++){
            cout << result[i][j] <<" ";
        }
        cout << endl;
    }
    return 0;
}

/*
Time: O(n*m)
Space: O(1) extra, excluding answer array
*/