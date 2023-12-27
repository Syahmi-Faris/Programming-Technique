// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main(){
    int number, sum=0, digit;
    
    cout << "Enter an integer number: ";
    cin >> number;
    
    while (number != 0){
        digit = number % 10;
        sum += digit;
        number/= 10;
        if(number == 0)
            cout << digit << " ";
            else
            cout << digit << " + ";
    }
    
    cout << " = " << sum << "\n";
    
    if (sum%2==0 && sum%4==0 && sum%5==0){
        cout << sum << " is an even number & multiple of 4 and 5";
    }
    else if (sum%2!=0 && sum%4==0 && sum%5==0){
        cout << sum << " is an odd number & multiple of 4 and 5";
    }
    else if (sum%2==0){
        cout << sum << " is an even number";
    }
    else if (sum%2!=0){
        cout << sum << " is an odd number";
    }
    return 0;
}