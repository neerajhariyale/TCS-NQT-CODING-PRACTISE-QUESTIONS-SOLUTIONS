//Print Prime numbers in a given range

#include <iostream>
using namespace std;

bool isPrime(int n){
    int count = 0;

    if(n < 2)
        return false;
    
    for(int i = 2;i < n/2; i++) 
    { 
        if(n % i == 0) 
            return false;
    }
    
    return true;
}
int main()
{
    int number1, number2;

    cout << "Enter the number1 and number2 :" << endl;
    cin >> number1 >> number2 ;
    
    for(int i = number1; i <= number2; i++)
        if(isPrime(i))
            cout << i << " " ;
}