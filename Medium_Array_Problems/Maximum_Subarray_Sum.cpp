#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2, 3, 5, -2, 7, -4};
    int n = sizeof(arr) / sizeof(arr[0]);

    /*At each index:
👉 “Should I extend previous subarray OR start new?”
    */
    int sum = 0 ,maxSum = INT_MIN;
    for(int i = 0  ; i < n;i++){
            sum +=arr[i];
            maxSum = max(maxSum,sum);
        if(sum <0){
            sum =0;
        }
    }
    cout << maxSum << endl;
    return 0;
}