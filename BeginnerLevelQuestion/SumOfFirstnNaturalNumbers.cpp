//Program to Find the Sum of N Natural Numbers

#include<iostream>


using namespace std;

int main(){

    int number ;
    int sum = 0;
    cout << "Enter a number :" << endl;
    cin >> number;

    if(number <= 0){
        cout << "Natural number should not be zero or negative number ." << endl;
        cout << "Enter a number greater than 1." << endl ;
    }
    else{
        for(int i = 1 ; i <= number ; i++){
            sum = sum + i;
        }

        cout << "Sum is :" << sum << endl ;
    }
}