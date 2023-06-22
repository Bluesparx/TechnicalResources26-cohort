#include<iostream>
using namespace std;

int count(int n){
    int dig=0;
    while(n>0){
        dig++;
        n=n/10;
    }
    cout<<"No. of digits = ";
    return dig;
}

int main(){
    int num;
    cout<<"Enter number = ";
    cin>>num;
    cout<<count(num);
    return 0;
}
