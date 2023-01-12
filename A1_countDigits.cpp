#include<iostream>
using namespace std;

int main(){
    int digits=0, num;
    cout<<"Enter number = ";
    cin>>num;
    do{
        digits++;
        num=num/10;
    }
    while (num>0);
    cout<<"No. of digits = ";
    cout<<digits;
    return 0;
}
