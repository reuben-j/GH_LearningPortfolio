#include <iostream>
#include <regex>

using namespace std;

int main() {
    string str1 = "Hello there my friend";
    regex a("(Hello)(.*)");
    regex b("(my)(.*)");

    if((regex_match(str1, a) && (regex_match(str1, b)))) {
        cout << "Match for Hello";
    } 
}