// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same.

// Consider the number of unique elements in nums to be k​​​​​​​​​​​​​​. After removing duplicates, return the number of unique elements k.

// The first k elements of nums should contain the unique numbers in sorted order. The remaining elements beyond index k - 1 can be ignored.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,1,2,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 0;

    for(int i = 1 ; i< n ;i++){
        if(arr[k] != arr[i]){
            k++;
            arr[k] = arr[i];
        }
    }
    cout << "Size of array after removing duplicates : " << k +1 << endl;
    return 0;
}