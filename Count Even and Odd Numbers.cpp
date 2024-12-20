#include <iostream>
using namespace std;

int main() {
    int arr[8], even = 0, odd = 0;

    cout << "Enter 8 numbers: ";
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even: " << even << ", Odd: " << odd << endl;
    return 0;
}
