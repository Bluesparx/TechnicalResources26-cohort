#include<iostream>
using namespace std;

bool check(int n){
    for (int i = 2; i < n; i++){
        if (n%i ==0){
            return false;
        }
    }
    if (n==1||n==0){
        return false;
    }
    else
    return true;
}

int main(){
    int x;
    cout<<"Enter number= ";
    cin>>x;
    cout<<"prime numbers till number are \n";
    for (int i = 0; i <= x; i++){
        if (check(i)==true){
           cout<<i<<endl;
        }
    }
    return 0;
}
