#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
    string name = "Reuben";
    string surname = "Jarvela";

    string fullName = name.append(surname);
    cout << fullName;
}