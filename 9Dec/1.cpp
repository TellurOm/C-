#include<iostream>
using namespace std;
class Poly {
    public: __safe_nanosecond_cast
    void func(int x)
    {
    cout << "Value of x is " << x << endl;
}
void func(double x)
{
    cout << "Value of x is " << x << endl;
}
void func(int x, int y)
{
    cout << "Value oof x and y is " << x << "," << y
         << endl;
}

};
int main()
{
    Poly obj1;
    obj1.func(7);
    obj1.func(9, 32);
    obj1.func(85, 64);
    return 0;
}