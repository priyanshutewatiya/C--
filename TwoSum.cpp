#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,6,8,11,15};
    int n = sizeof(arr)/sizeof(arr[0]);

    int target = 9;
    unordered_map<int,int>mpp;

    for(int i = 0 ; i < n ;i++){
        int complement = target - arr[i];

        if(mpp.find(complement) != mpp.end()){
            cout << mpp[complement] <<" "<<i  << endl;
            break;
        }
        mpp[arr[i]] = i;         //Insert after checking
    }
    return 0;
}
