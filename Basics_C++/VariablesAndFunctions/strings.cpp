#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    
    //! Common string functions

    //TODO string.length(), string.size()

    string name = "Reuben";
    cout << name.length() << endl << name.size() << endl; //output 6 6
    //* output string length 



    //TODO string[location], string.at(location)
    string nameAbi = "Abigail";
    cout << nameAbi[0] << endl << nameAbi.at(0) << endl; //output A A
    //* Returns the value of the specified location



    //TODO string1+string2, string1.append(string2)
    string str1 = "Hiya";
    string str2 = "Friend";
    string str3 = str1 + " " + str2;
    string str4 = str1.append("hello");
    cout << str3 << endl << str4 << endl;// output Hiya Friend endl Hiyahello
    //* two ways to concatenate two strings together



    //TODO (  =  ) equals operator, string.compare(otherString)
    string stringNew = "Weapon";
    string stringNewer = "Legend";
    if(stringNew == stringNewer || stringNew.compare(stringNewer)==0) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    } // ouput true
    //* Two ways to be able to compare functions. Both ways return a bool, 0 if true, 1 or more if false. 



    //TODO string.substr(stringPosition, stringLength)
    string newest = "ThisIsANewString";
        cout << newest.substr(4, newest[3]) << endl;//output IsANewString
    //* using the substr() function, you chose the size of the new substring, then where to begin substring from the original string



    //TODO string.find(substring) 
    string strFind = "LookingForMe";
        cout << strFind.find("Me") << endl; //ouput 10
    //* find() function returns the position of the given substring



    //TODO string.replace(position, length of substring to be replaced, the replacing string)
    string words = "Hello My Friends";
       cout << words.replace(0, 5, "Goodbye") << endl; //ouput Goodbye My Friends
    //* specifying the starting location, the length of removed substring and the replacement substring/string, use this function to replace parts of a string



    //TODO string.insert(index, string)
    string strInsert = "Hello ";
    string toBeInserted = "Mate";
    string newInsert = strInsert.insert(strInsert.length(), toBeInserted);
        cout << newInsert << endl;//output Hello Mate
    //* Functions allows you to insert a new string with the information of index and new string to be inserted



    //TODO string.erase()
    string toBeErased = "Goodbye";
        cout << toBeErased << endl; //ouput Goodbye
    toBeErased.erase();
        cout << "Is there anything next to this ->" << toBeErased << "?" << endl;//no output from toBeErased string
    //* Erases the entire string

    string partlyErased = "I'm Leaving";
    partlyErased.erase(3);
        cout << partlyErased << endl; //output I'm
    //* Erases everthing after the specified index

    

    //TODO string.reverse(start index, end index)
    string toBeReversed = "hello";
    reverse(toBeReversed.begin(), toBeReversed.end());
        cout << toBeReversed << endl; //output olleh
    //* Easi;y reverse string by passing beginning and end of original string

    //TODO string.empty() returns true if length of string is 0
    string emptyTest = "";
    cout << bool(emptyTest.empty()); // returns 1 because is true
}