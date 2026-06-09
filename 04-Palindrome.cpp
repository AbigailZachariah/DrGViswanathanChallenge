#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0)return false;
        
    int temp=x;
    long long n=0;
    while(temp>0){
        int r=temp%10;
        n=n*10+r;
        temp/=10;
    }
    if(n==x)return true;
    return false;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;

    bool result=isPalindrome(n);
    
    if(result) cout<<"The number is Palindrome";
    else cout<<"Not a Palindrome";
    
    return 0;
}