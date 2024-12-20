#include <iostream>
using namespace std;

int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    cout << "Max of 3 and 5: " << max(3, 5) << endl;
    cout << "Max of 3.5 and 5.7: " << max(3.5, 5.7) << endl;
    return 0;
}
