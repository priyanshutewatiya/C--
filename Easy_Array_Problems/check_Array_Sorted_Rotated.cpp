#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3, 4,5 , 1,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    int count = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] > arr[(i+1) % n]){
            count++;
        }
    }
    if(count <= 1){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}

// Given an array nums, return true if the array was originally sorted in non-decreasing order, then rotated some number of positions (including zero). Otherwise, return false.

// There may be duplicates in the original array.

// Note: An array A rotated by x positions results in an array B of the same length such that B[i] == A[(i+x) % A.length] for every valid index i.