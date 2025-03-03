#include<iostream>

using namespace std;


int main(){

    int number ;
    int count = 0 ;

    cout << "Enter a number :" << endl;
    cin >> number ;


    if(number == 0 || number == 1){
        cout << "Not a Prime Number." << endl;
    }

    for(int i = 1 ; i < number+1 ; i++){
        if(number%i == 0){
            count++;
        }
    }

    if(count > 2){
        cout << "Not a Prime Number." << endl;
    }
    else{
        cout << "Prime Number." << endl;
    }
    

    
    return 0;
}