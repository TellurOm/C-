//Ex. Function with Parameters
#include<iostream>
using namespace std;

// display a number
void displaythat(int n1, float n2) {
    cout << "The int number is " << n1<<endl;
    cout << "The double number is " << n2;
}

int main() {

    int num1 = 5;
    double num2 = 5.5;

    //calling the function
    displaythat (num1,num2);
    
    return 0;
}