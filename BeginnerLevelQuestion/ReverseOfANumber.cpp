//find the Reverse of a Number

#include<iostream>
using namespace std;

int main(){
    int number ;
    int reverse= 0;
    
    cout << "Enter a number :" << endl;
    cin >> number;

    while(number != 0){
        int rem= number%10;
        reverse = reverse * 10 + rem;
        number = number/10;
    }

    cout << reverse << endl;

    return 0;
}