#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
//TODO isalnum()
char ch = 'A';
char cha = '%';
if(isalnum(cha) == true) {
    cout << cha << " " << "Tis alphanumerical!" << endl;
} else {
    cout << cha << " " << "Tis not alphanumerical!" << endl;
}
//* Returns bool whether variable is alphanumeric or not



//TODO isalpha()
char alpha = '1';
if(isalpha(alpha) == true) {
    cout << alpha << " " << "This is a letter" << endl;
} else {
    cout << alpha << " " << "This is not a letter" << endl;
}
//* Return bool whether or not variable is alphabetic



//TODO isdigit()
char num = '9';
if(isdigit(num)) {
    cout << num << " " << "This is a number";
} else {
    cout << num << " " << "This is not a number";
}
//* Returns bool whether or not variable is a decimal digit or not
}