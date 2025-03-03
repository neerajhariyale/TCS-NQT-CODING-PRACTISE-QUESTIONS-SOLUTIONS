// Program to find the Greatest of three numbers

#include<iostream>

using namespace std;

int main(){

    int number1 , number2 , number3 ;
    
    cout << "Enter the number1, number2, number3 :" <<endl;
    cin >> number1 >> number2 >> number3 ;

    if((number1 >= number2) && (number1 >= number3)){
        cout << "Number 1 is greatest." << endl;
    }
    else if((number2 >= number1) && (number2 >= number3)){
        cout << "Number 2 is greatest." << endl;
    }
    else if((number3 >= number1) && (number3 >= number2)){
        cout << "Number 3 is greatest." << endl;
    }

    return 0;
}