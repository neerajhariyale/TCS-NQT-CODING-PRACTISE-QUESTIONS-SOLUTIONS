//Palindrome or not

#include<iostream>
using namespace std;

int main(){
    int number ;
    int reverse = 0;
    int copy = 0;

    cout << "Enter a Number :" << endl ;
    cin >> number ;

    copy = number;

    while(number != 0){
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }

    if(copy == reverse){
        cout << "Pallindrom" << endl;
    }else{
        cout << "Not a Pallindrom" << endl;
    }
    return 0;
}