#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector<int>arr(n);

    for(int i = 0 ; i< n;i++){
        cin >> arr[i] ;
    }

    int largest = INT_MIN;

    for(int x : arr){
        if(x > largest){
            largest = x ;
        }
    }

    cout << "Largest element is: " << largest << endl;
    return 0;
}