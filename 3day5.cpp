//Ex. C++ Program to find the square root og the number
#include<iostream>
#include <math>
using namespace std;

int main() {
    double number, squareRoot;

    number = 25.0;
    //sqrt() is a library function to 
    squareRoot = sqrt(number);

    cout << "square root of " << number << squareRoot;

    return 0;
}