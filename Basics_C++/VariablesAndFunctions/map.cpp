#include <iostream>
#include <map>
#include <string>
#include <fstream>

using namespace std;

int main() {
    // declare map with map keyword, followed by key variable type then value variable type
    // string and string in this example with map named myMap
    map<string, string>myMap;

    // insert values into map
    myMap["one"] = "Reuben";
    myMap["two"] = "Abigail";

    // specifically target key to print
    cout << myMap["one"];

    // get an iterator pointing to first element of map
    map<string, string>::iterator it = myMap.begin();

    // // iterate through map
    while (it != myMap.end()) { // while the iterator does not equal last member of map
        cout << "Key: " << it->first // print key then first part of iterator member
            << " - Value: " << it->second << endl; // print second part of first iterator
        ++it; // increase iteratory count to look at next key/value pair
    }



    map<string, string>passwordMap;
    string passwordId, passwordItself;
    cout << "What is the name of the password you would like to store? " << endl;
    cin >> passwordId;
    cout << "What is your password? " << endl;
    cin >> passwordItself;

    passwordMap[passwordId] = passwordItself;

    map<string, string>::iterator Iteratory = passwordMap.begin();

    while(Iteratory != passwordMap.end()) {
         cout << "Name: " << Iteratory->first 
            << " - Password: " << Iteratory->second << endl; 
        ++Iteratory;
    }

    
}