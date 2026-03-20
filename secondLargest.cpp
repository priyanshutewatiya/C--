#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0 ; i< n;i++){
        cin >> arr[i] ;
    }

    int slargest = INT_MIN;
    int largest = INT_MIN;
    
    for(int x : arr){
        if(x > largest){
            slargest = largest;
            largest = x ;
        }
    }
    cout << "Second largest element is: " << slargest << endl;
    return 0;
}