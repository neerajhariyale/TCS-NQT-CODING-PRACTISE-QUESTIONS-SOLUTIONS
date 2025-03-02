//Check Whether a Number is Even or Odd in C++

#include<iostream>

using namespace std;

int main(){

    int number ;

    cout << "Enter a number :" << endl;
    cin >> number ;

    if(number % 2 == 0){
        cout << "Even Number " << endl;
    }
    else {
        cout << "Odd Number" << endl;
    }
}