#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num =0;
    cout <<"Enter Number: ";
    cin >> n;
    int number = n;

    while(n){
        int rem = n % 10;
        num += rem * rem * rem;
        n = n /10;
    }
    if(number == num){
        cout <<"Armstrong Number"<<endl;
    }
    else{
        cout <<"Not an Armstrong"<<endl;
    }
    return 0;
}