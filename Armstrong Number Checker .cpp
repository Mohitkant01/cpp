#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, sum = 0, originalNum, digit;

    cin >> num;

    originalNum = num;


    while (num != 0) {
        digit = num % 10; 
        sum += pow(digit, 3);  
        num /= 10;  
    }
    if (sum == originalNum)
        cout << originalNum << " is an Armstrong number.";
    else
        cout << originalNum << " is not an Armstrong number.";

    return 0;
}
