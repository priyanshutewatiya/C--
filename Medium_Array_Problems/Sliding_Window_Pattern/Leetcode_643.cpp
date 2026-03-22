/*Maximum Average Subarray I
You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value
and return this value. Any answer with a calculation error less than 10-5 will be accepted.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,12,-5,-6,50,3};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    for(int i = 0 ; i < k;i++){
        sum += arr[i];
    }
    
    int maxSum = sum;
    for(int i = k ; i<n;i++){
        sum += arr[i] - arr[i -k];
        maxSum = max(maxSum , sum);
    }
    cout << (double)maxSum/k <<endl;
    return 0;
}