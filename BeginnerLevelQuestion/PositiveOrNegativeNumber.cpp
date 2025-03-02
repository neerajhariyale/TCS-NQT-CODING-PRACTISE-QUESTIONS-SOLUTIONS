//Program to check whether a number is positive or negative

#include<iostream>

using namespace std;

int main(){
    int number ;

    cout << "Enter a number: ";
    cin >> number;

    if(number > 1){
        cout << "Number is Postive" << endl;
    }
    else if(number < 0){
        cout << "Number is Negative" << endl;
    }
    else{
        cout << "Number is zero" << endl;
    }
}



