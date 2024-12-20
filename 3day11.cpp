//Ex. C++ Programs to illustrate Pointers
#include<iostream>
using namespace std;
void demonstration_pointer()
{
    int var = 20;
    int* ptr;
    ptr = &var;
    cout <<"Value of ptr = "<< ptr << "\n";
    cout <<"Value of var = "<< var << "\n";
    cout <<"Value of *ptr = "<< *ptr << "\n";
}
int main()
{
    demonstration_pointer();
    return 0;
}