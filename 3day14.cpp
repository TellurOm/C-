#include<iostream>
using namespace std;
int main()
{
    int a[3] = {10, 20, 30};
    int *ptr=a
    cout<<"Access First Elements = "<<ptr<<endl;
    cout<<"Access Second Elements = "<<ptr+1<<endl;
    cout<<"Access Third Elements = "<<ptr+2<<endl;
    return 0;
}