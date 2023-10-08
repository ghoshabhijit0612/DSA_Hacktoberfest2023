#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(int n) {
    int ans = 0;
    int i = 0;
    while (n != 0) {
        int digit = n % 10;
        if (digit == 1) {
            ans += pow(2, i);
        }
        n /= 10;
        i++;
    }
    return ans;
}

int decimalToBinary(int n) {
    int ans = 0;
    int base = 1;
    while (n > 0) {
        int bit = n % 2;
        ans += bit * base;
        n /= 2;
        base *= 10;
    }
    return ans;
}

int main() {
    cout << "Welcome to binary and decimal converter Program" << endl;
    cout << "Please Enter Your Choice" << endl;
    cout << "1. Convert Binary into Decimal" << endl;
    cout << "2. Convert Decimal into Binary" << endl;

    int ch;
    cin >> ch;

    switch (ch) {
        case 1:
            cout << "Enter binary to convert it into a number: ";
            int binaryInput;
            cin >> binaryInput;
            cout << "Answer is " << binaryToDecimal(binaryInput) << endl;
            break;
        case 2:
            cout << "Enter number to convert it into binary: ";
            int decimalInput;
            cin >> decimalInput;
            cout << "Answer is " << decimalToBinary(decimalInput) << endl;
            break;
        default:
            cout << "Enter a valid option!" << endl;
            break;
    }

    return 0;
}
