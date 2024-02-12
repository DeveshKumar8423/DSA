#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input how many times you want to iterate a loop: " << endl;
    cin >> n;

    int sum = 0;
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        cout << i << endl;
        sum += i;
        fact *= i;
    }

    cout << "The sum of numbers between 1 and " << n << " is equal to " << sum << endl;
    cout << "The factorial of " << n << " is equal to " << fact << endl;

    return 0;
}