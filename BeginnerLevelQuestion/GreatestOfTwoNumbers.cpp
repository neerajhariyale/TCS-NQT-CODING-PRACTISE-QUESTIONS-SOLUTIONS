//Find the Greatest of the Two Numbers

#include<iostream>
using namespace std;

int main(){

    int number1 , number2;

    cout << "Enter the number1 and number2 :" << endl;
    cin >> number1 >> number2 ;

    if(number1 == number2){
        cout << "Both number are equal." << endl;
    }
    else if(number1 > number2){
        cout << "Number1 is greater :" << number1 << endl;
    }
    else if(number1 < number2){
        cout << "Number2 is greater :" << number2 << endl;
    }
    else{
        cout << "Invalid numbers" << endl;
    }

    
    return 0;
}