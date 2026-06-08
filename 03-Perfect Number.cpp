#include <bits/stdc++.h>
using namespace std;

bool checkPerfectNumber(int num) {
    int temp=num;
    int sum=0;
  
    for(int i=1;i<=temp/2;i++){
        if(temp%i==0){
            sum+=i;
        }
    }

    if(sum==num) return true;
    else return false;

}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;

    bool perfect=checkPerfectNumber(n);
    if(perfect) cout<<"Perfect number!";
    else cout<<"Not a perfect number!";

    return 0;
}