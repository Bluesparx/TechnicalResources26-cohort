#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    int dvd = num1;
    int div = num2;

    while(dvd % div != 0){
        int rem = dvd % div;
        dvd = div;
        div = rem;
    }
    cout<<"The HCF is = "<<div<<endl;
    int lcm = (num1 * num2) / div;
    cout<<"The LCM is = "<<lcm<<endl;
    return 0;
}
