#include<math.h> 
#include<iostream>
using namespace std;

int order(int x)
{
    int len = 0;
    while (x)
    {
        len++;
        x = x/10;
    }
    return len;
}

void armstrong(int low, int high){
    
    for(int num = low; num <= high; num++){
        
        int sum = 0, temp, digit, len;
        temp = num;
        
        len = order(num);
        
        while(temp != 0)
        {
            digit = temp % 10;
            sum = sum + pow(digit,len);;
            temp /= 10;
        };
    
        if(sum == num){
            cout << num << " ";
        }
    }
}


int main ()
{

    int low = 100, high = 4000;
    armstrong(low, high);

    return 0;
}