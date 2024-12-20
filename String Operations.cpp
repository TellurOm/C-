//Reverse of a String
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Reversed string: ";
    for (int i = str.length() - 1; i >= 0; i--)
        cout << str[i];
    return 0;
}

 //Concatenate Two Strings
 #include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter two strings: ";
    cin >> s1 >> s2;

    cout << "Concatenated string: " << s1 + s2 << endl;
    return 0;
}

//string Length
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    cout << "Length: " << str.length() << endl;
    return 0;
}
