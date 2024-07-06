#include <iostream>
#include <regex>

using namespace std;

int main() {


    //TODO regex_match
    string text = "Reuben";
    regex pattern("R.*n"); 
    //'R' is the beginning of the pattern
    //'.*' means any char and any number of character can be between the first and last searched for chars
    //'n' is the end of the search pattern
    //'*' can be on its own as it represent any char
    //'.' can not be on its own, if its alone it will interpreted as part of the searched for string
    
    if (regex_match(text, pattern)) {
        cout << "The text matches the pattern!" << std::endl;
    } else {
        cout << "The text does not match the pattern." << std::endl;
    } // output - The text matches the pattern
    
   
    //
}
