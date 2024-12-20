// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Take and string
    string str = "Anushree";
    //copy 2 characters of s1(starting
    // from index 3
    string r = str.substr(3, 2);
    // print the string
    cout <<"String is:" << r;
    return 0;
}
