#include<iostream>
using namespace std;
class MyClass {
    public: 
    int x;
    private:
    int y;
};
int main() {
    MyClass myObj;
    myObj.x = 25;
    cout<<"Hello World"<<endl<<myObj.x<<endl;
    myObj.y = 50;
    return 0;
}