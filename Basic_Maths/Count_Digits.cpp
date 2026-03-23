#include <bits/stdc++.h>
using namespace std;

int main(){
    int n , count = 0;
    cout << "Enter Number : ";
    cin >> n;

    while(n){
        int rem = n % 10;
        count++;
        n = n/10;
    }
    cout << count << endl;
    return 0;
}