#include <iostream>
using namespace std;

int main() {
    int arr[5], max = 0;

    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i] > max) max = arr[i];
    }

    cout << "Largest number: " << max << endl;
    return 0;
}
