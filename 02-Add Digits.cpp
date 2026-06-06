#include<bits/stdc++.h>
using namespace std;

int addDigits(int num) {

    if(num/10==0){
        return num;
    }

    int sum=0;
    
    while(num>0){
        int r=num%10;
        sum+=r;
        num/=10;
    }
    return addDigits(sum);
}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    cout<<addDigits(n);
    return 0;
}