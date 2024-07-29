#include <iostream>

using namespace std;

class MyClass { // class declaration and naming
    public: //access specifier
        int age;        //attribute
        string name;    //attribute
        void printMethod() {
            cout << "I am from a class method!";
        }
};

int main() {

    MyClass newObjReuben; // object creation from class

    newObjReuben.age = 24; // attribute value declaration
    newObjReuben.name = "Reuben";// attribute value declaration
    newObjReuben.printMethod(); // call class method

}