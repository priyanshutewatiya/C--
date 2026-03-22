#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]= {1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    unordered_map<int,int>freq;
    freq[0] = 1;
    int sum = 0, count = 0;

    for(int i = 0 ; i < n;i++){
        sum += arr[i];

        if(freq.find(sum -k) != freq.end()){
            count += freq[sum - k];
        }

        freq[sum]++;
    }
    cout<<"COunt of SUbarray : " << count <<endl;
    return  0;
}