//Sum of Even Numbers and Product of Odd Numbers
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, product = 1;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            sum += i;  // Add even numbers
        else
            product *= i;  // Multiply odd numbers
    }

    cout << "Sum of even numbers: " << sum << endl;
    cout << "Product of odd numbers: " << product << endl;
    return 0;
}