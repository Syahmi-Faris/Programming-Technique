#include <iostream>
using namespace std;

int main() {
    int number, digit, sumOfDigits=0;
    
    cout << "Enter an integer number: ";
    cin >> number;
    
    while (number != 0) {
            int digit = number % 10;
            sumOfDigits += digit;
            number /= 10;
            if(number == 0)
            cout << digit << " ";
            else;
            cout << digit << " + ";
        }
    cout << " = " << sumOfDigits << "\n";
    
    if (sumOfDigits % 3 == 0 && sumOfDigits % 4 == 0 && sumOfDigits % 5 == 0){
        cout << sumOfDigits << " is a multiple of 3, 4 and 5";
    }
    else if (sumOfDigits % 3 == 0 && sumOfDigits % 4 == 0){
        cout << sumOfDigits << " is a multiple of 3 and 4";
    }
    else if (sumOfDigits % 3 == 0 && sumOfDigits % 5 == 0){
        cout << sumOfDigits << " is a multiple of 3 and 5";
    }
    else if (sumOfDigits % 4 == 0 && sumOfDigits % 5 == 0){
        cout << sumOfDigits << " is a multiple of 4 and 5";
    }
    else if (sumOfDigits % 3 == 0){
        cout << sumOfDigits << " is a multiple of 3";
    }
    else if (sumOfDigits % 4 == 0){
        cout << sumOfDigits << " is a multiple of 4";
    }
    else if (sumOfDigits % 5 == 0){
        cout << sumOfDigits << " is a multiple of 5";
    }
    return 0;
}
