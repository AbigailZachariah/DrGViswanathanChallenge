#include <bits/stdc++.h>
using namespace std;

bool isHappy(int n) {
    if(n==1)return true;
    if((long)n*n==4 || n==4)return false;
    
    int sum=0;
    while(n>0){
        int r=n%10;
        sum+=(r*r);
        n/=10;
    }
    return isHappy(sum);
}

int main(){
    int num;
    cout<<"Enter a number:";
    cin>>num;

    bool result=isHappy(num);
    if(result)cout<<"The Number is Happy";
    else cout<<"The number is not happy";
    return 0;
}