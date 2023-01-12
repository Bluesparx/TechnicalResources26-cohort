#include<iostream>
using namespace std;

bool check(int a){
    for (int i = 2; i <a; i++){
        if (a%i==0){
            return false;
        }
    }
    if (a==1||a==0){
        return false; 
    }
    else
    return true;
}

int main(){
    int number;
    cout<<"Enter number = ";
    cin>>number;
    if (check(number)){
        cout<<"It is a prime number.";
    }
    else
    cout<<"Not a prime.";
    return 0;
}
