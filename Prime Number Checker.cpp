#include <iostream>
using namespace std;

int main() {
    int num;
    bool isPrime = true;

    cin >> num;

    if (num <= 1) {
        isPrime = false; // 0 and 1 are not prime numbers
    } else {
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number.";
    else
        cout << num << " is not a prime number.";

    return 0;
}
