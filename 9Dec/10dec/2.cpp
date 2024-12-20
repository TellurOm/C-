 #include <iostream>
 using namespace std;
 class MyClass {
    private:
    int myPrivateAttribute;
    public:
    MyClass() {
        myPrivateAttribute = 10;
        }
        int getMyPrivateAttribute() {
            return myPrivateAttribute;
            }
            void setMyPrivateAttribute(int value) {
                myPrivateAttribute = value;
                }
                };
                int main() {
                    MyClass obj;
                    cout << obj.getMyPrivateAttribute() << endl;
                    obj.setMyPrivateAttribute(20);
                    cout << obj.getMyPrivateAttribute() << endl;
                    return 0;
 }


