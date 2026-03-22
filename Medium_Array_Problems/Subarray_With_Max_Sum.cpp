#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int sum = 0 , maxSum = INT_MIN;
    int start = 0, end = 0, tempStart =0;

    for(int i = 0; i<n; i++){
        sum += arr[i];
        if(sum > maxSum){
            maxSum = sum;
            start = tempStart;
            end = i;
        }
        if(sum <0){
            sum = 0;
            tempStart = i+1;
        }
    }
    for(int i = start; i<=end; i++){
        cout << arr[i] << " ";
    }
    return 0;
}