#include <iostream>
using namespace std;

int main() {
    float principal, rate, time;

    cin >> principal >> rate >> time;

    float interest = (principal * rate * time) / 100;

    cout << "Simple Interest = " << interest;

    return 0;
}
