#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {-3, 4, 5, 1, -4, -5};
    int n = arr.size();
    vector<int> ans;

    int maximum = INT_MIN;
    for (int i = n - 1; i >= 0; i--){
        if(arr[i] > maximum){
            ans.push_back(arr[i]);
            maximum = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());

    for(int x : ans){
        cout << x << " ";
    }
    return 0;
}