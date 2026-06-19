#include <bits/stdc++.h>
using namespace std;

int bulbSwitch(int n) {
    //The number of bulbs that remain ON is exactly equal to the number of 
    //perfect squares less than or equal to n 
    return sqrt(n); 
}

int main(){
    int n;
    cout<<"Enter the number of bulbs:";
    cin>>n;

    cout<<"Bulbs On "<<bulbSwitch(n);
    return 0;
}