#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
//TODO isalnum()
char ch = 'A';
char cha = '%';
if(isalnum(cha) == true) {
    cout << "Tis!";
} else {
    cout << "Tis not!";
}
}