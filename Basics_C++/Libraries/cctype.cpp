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



//TODO isblank()
char str = ' ';
if(isblank(str)){
    cout << endl << str << " " << "is blank";
} else {
    cout << endl << str << " " << "is not blank";
}
//* Return bool whether or not char is blank



//TODO iscntrl()
string sentence = "My name is\n Reuben\t";
int count = 0;
for(int i = 0; i < sentence.length(); i++){
    char c = sentence[i];
    if(iscntrl(c)){
        count ++;
    }   
}
cout << endl << "control chars: " << count;
//* Return bool whether or not var is a control char such as \n \t \b \r \f



//TODO isupper(), islower()
string str1 = "UPPER lower MiXeD";
int upper = 0, lower = 0;
for(int i = 0; i < str1.length(); i++) {
    char c = str1[i];
    if(isupper(c)) {
        upper++;
    } else if (islower(c)) {
        lower++;
    } 
}
cout << endl << "upper: " <<  upper << endl << "lower: " << lower;



//TODO isprint()
string str2 = "This \n checks \t for \n printable \n chars";
int printable = 0;
int nonPrintable = str2.length() - printable;
for(int i = 0; i < str2.length(); i++) {
    char c = str2[i];
    if(isprint(c)!= 0) {
        printable++;
    }   
}
cout << endl << "printable: " << printable << " / " << nonPrintable;
//* isprint returns a bool whether or not the char is printable or not. Characters like \n \t are not printable


//TODO ispunct()
string str3 = "This, is! checking for : punctuation!";
int punctuation = 0;
for(auto i : str3) {
    char c = i;
    if(ispunct(c)!=0) {
        punctuation++;
    }
}
cout << endl << "There are these many punctuation chars: " << punctuation;
//* Return true if char is a punctuation char



//TODO isspace()
string str4 = "This is checking for white spaces";
int whiteSpaces = 0;
for(auto i : str4) {
    char c = i;
    if(isspace(i)) {
        whiteSpaces++;
    }
}
cout << endl << "Number of white spaces: " << whiteSpaces;
}