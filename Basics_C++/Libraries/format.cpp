#include <iostream>
#include <format>

using namespace std;

int main() {

    int age = 24;
    string name = "Reuben";
    string formatted_Str = format("My name is {} and I am {} years old", name, age);
    cout << formatted_Str;
    return 0;
}