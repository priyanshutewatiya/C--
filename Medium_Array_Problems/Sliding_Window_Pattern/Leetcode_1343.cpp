#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,2,2,2,5,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3 , threshold = 4;

    int sum = 0 , count = 0;
    for(int i = 0 ; i < k;i++){
        sum += arr[i];
    }

    if((double)sum / k >= threshold){
            count++;
    }

    for(int i = k ; i < n;i++){
        sum += arr[i] - arr[i-k];
        if((double)sum / k >= threshold){
            count++;
        }
    }
    cout << "count of ssubarray :"<<count<<endl;
    return 0;
}