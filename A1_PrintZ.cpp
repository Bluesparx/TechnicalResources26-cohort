#include<iostream>
using namespace std;

int main(){
    int size;
    cout<<"Enter size = ";
    cin>>size; //we will enter 5
    for (int i = 0; i <size; i++){
            cout<<"*";      
    }
    cout<<endl;
    for (int i =size-1; i>1; i--){
        for (int j = 1; j<i; j++){
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int i = 0; i <size; i++){
            cout<<"*";      
    }
    return 0;
}
