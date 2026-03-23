#include<bits/stdc++.h>
using namespace std;

int main(){
    int n , num =0;
    cout <<"Enter number : ";
    cin >> n;

    int number = n;

    while(n){
        int rem = n % 10;
        num = num *10+rem;
        n = n/10;
    }
    if(number == num){
        cout <<"Palindrome Number"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}