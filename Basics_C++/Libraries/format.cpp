#include <iostream>
#include <format>

using namespace std;

int main() {

    int age = 24;
    string name = "Reuben";
    string formatted_Str = format("My name is {} and I am {} years old", name, age);
    cout << formatted_Str << endl;
    return 0;

    int num1 = 654;
    string myStr = format("My least favourite number is {}", num1);
    cout << myStr << endl;
}