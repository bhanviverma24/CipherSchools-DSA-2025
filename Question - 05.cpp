#include<bits/stdc++.h>
using namespace std;

int SumInt(int n){
    if(n==0){
        return 0;
    }

    return (n%10)+SumInt(n/10);
}

int main(){

    int a;
    cout<<"Enter the positive integer\n";
    cin>>a;
    if(a<0){cout<<"Enter positive integer only.";}
    else{
    cout<<"The sum of the digits of "<<a<<" is "<<SumInt(a)<<endl;}
    return 0;

}
