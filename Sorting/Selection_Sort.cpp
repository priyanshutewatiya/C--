#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] ={4,3,5,1,7,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0 ; i < n ;i++){
        int minimum = i;
        
        for(int j = i + 1 ; j < n; j++){
            if(arr[j] < arr[minimum]){
                minimum = j;
            }
        }
        swap(arr[i],arr[minimum]);
    }

    for(int x : arr){
        cout << x <<" ";
    }
    return 0;
}