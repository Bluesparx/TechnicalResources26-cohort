#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"Enter marks= ";
    cin>>marks;
    if (marks>90)
    {
        cout<<"Excellent!";
    }
    else if(marks>80){
        cout<<"Good";
    }
    else if(marks>70){
        cout<<"Fair";
    }
    else if(marks>60){
        cout<<"Meets expectations";
    }
    else{
        cout<<"Below par";
    }
    return 0;
}
