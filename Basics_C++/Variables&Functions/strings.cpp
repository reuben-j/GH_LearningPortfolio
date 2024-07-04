#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main() {
    
    //! Common string functions

    //TODO string.length(), string.size()

    string name = "Reuben";
        //! cout << name.length() << endl << name.size(); //output 6 6
    //* output string length 



    //TODO string[], string.at(location)
    string nameAbi = "Abigail";
        //! cout << nameAbi[0] << endl << nameAbi.at(0); //output A A
    //* Returns the value of the specified location



    //TODO string1+string2, string1.append(string2)
    string str1 = "Hiya";
    string str2 = "Friend";
    string str3 = str1 + " " + str2;
    string str4 = str1.append("hello");
        //! cout << str3 << endl << str4; // output Hiya Friend endl Hiyahello
    //* two ways to concatenate two strings together



    //TODO (  =  ) equals operator, string.compare(otherString)
    string stringNew = "Weapon";
    string stringNewer = "Legend";
    if(stringNew == stringNewer || stringNew.compare(stringNewer)==0) {
        //! cout << "True";
    } else {
        //! cout << "False";
    } // ouput true
    //* Two ways to be able to compare functions. Both ways return a bool, 0 if true, 1 or more if false. 



    //TODO string.substr(stringPosition, stringLength)
    string newest = "ThisIsANewString";
        //! cout << newest.substr(4, newest[3]); //output IsANewString
    //* using the substr() function, you chose the size of the new substring, then where to begin substring from the original string



    //TODO string.find(substring) 
    string strFind = "LookingForMe";
        //! cout << strFind.find("Me"); //ouput 10
    //* find() function returns the position of the given substring



    //TODO string.replace(position, length of substring to be replaced, the replacing string)
    string words = "Hello My Friends";
        //! cout << words.replace(0, 5, "Goodbye"); //ouput Goodbye My Friends
    //* specifying the starting location, the length of removed substring and the replacement substring/string, use this function to replace parts of a string



    //TODO 

}