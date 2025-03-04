//Armstrong Number
#include<math.h>
#include<iostream>
using namespace std;

int numberSize(int number){
    
    int count = 0;

    while(number!=0){
        count++;
        number /= 10;
    }
    return count;
}

bool armstrongNumber(int number , int n){
   int rem , sum = 0, copy;
   copy = number;

   while(number != 0){
    int rem = number % 10;
    sum = sum + pow(rem,n);
    number = number/10;
   }

   return copy == sum;
}
int main(){
    
    int number ;

    cout << "Enter a number :" << endl;
    cin >> number ;

    int n = numberSize(number);

    if(armstrongNumber(number , n)){
        cout << "Armstrong Number" << endl;
    }else{
        cout << "Not a Armstrong Number" << endl;
    }


    return 0;
}