//Find the Sum of Digits of a Number 

#include<iostream>
using namespace std;

int main(){

    int number;
    int sum = 0;
    int rem = 0;


    cout << "Enter a number :" << endl;
    cin >> number ;

    while (number != 0)
    {
        rem = number%10;
        sum = sum + rem;
        number = number/10;
        
    }
    

    cout << sum ;

    return 0;
}