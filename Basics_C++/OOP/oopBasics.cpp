#include <iostream>

using namespace std;

class MyClass { // class declaration and naming
    public: //access specifier
        int age;        //attribute
        string name;    //attribute
        void printMethod() {
            cout << "My name is: " << name << endl;
        }
};

class Person: public MyClass {
    public:
        string faveFood;
};

int main() {

    MyClass newObjReuben; // object creation from class

    newObjReuben.age = 24; // attribute value declaration
    newObjReuben.name = "Reuben";// attribute value declaration
    newObjReuben.printMethod(); // call class method

    Person newPersonAbi; // new object creation

    newPersonAbi.faveFood = "Chocolate"; // attribute declaration, new and different from parent class
    newPersonAbi.name = "Abi"; // attribute declaration
    newPersonAbi.printMethod(); // call function from parent class

}