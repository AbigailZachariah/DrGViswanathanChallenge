#include<bits/stdc++.h>
using namespace std;

void isPerfectSquare(int num) {
        
    for(long i=1;i<=num;i++){
        if(i*i==num){
            cout<<"It is a perfect square";
            break;
        }
        else {
            cout<<"It is not a perfect square";
            break;
        }
    }
}

int main(){

    int number;
    cout<<"Enter the element: ";
    cin>>number;

    isPerfectSquare(number);
        
    return 0;
}