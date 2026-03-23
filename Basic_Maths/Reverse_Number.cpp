#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,num =0;
    cout <<"Enter number : ";
    cin >> n;

    while(n){
        int rem = n % 10;
        num = num *10 + rem;
        n = n/10;
    }
    cout << num <<endl;
    return 0;
}