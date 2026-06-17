#include <bits/stdc++.h>
using namespace std;

int titleToNumber(string columnTitle) {
    long long result=0;

    for(auto c :columnTitle){
        long long d=c-'A'+1;

        result=(result*26)+d;
    }
    return (int)result;
}

int main(){
    string str;
    cout<<"Enter uppercase string:";
    cin>>str;
    
    cout<<titleToNumber(str);
    return 0;
} 