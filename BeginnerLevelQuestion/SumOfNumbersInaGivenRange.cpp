//Find the Sum of Numbers in a Given Range in C++

#include<iostream>

using namespace std;

int main(){

    int number1 , number2;
    int sum = 0;

    cout << "Enter a number1 and number2 :" << endl ;
    cin >> number1 >> number2 ;

    if(number1 >= 0 && number2 >=0){
        for(int i = number1 ; i <= number2 ; i++){
            sum = sum + i;
        }
        cout <<  "Sum is :" << sum << endl;
    } 
    else{
        cout << "Invalid numbers." << endl; 
    }

  // Using Formula  
  //int sum = y*(y+1)/2 - x*(x+1)/2 + x;

    return 0;
}