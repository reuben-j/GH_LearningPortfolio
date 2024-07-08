#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // create and open a text file
    ofstream MyFile("filename.txt");

    // write to file
    MyFile << "I am testing, this should write to the file I created above! \n";
    MyFile << "This should be on the next line!";

    // close file - good practice
    MyFile.close();

    // create string to use when opening file
    string readFromFile;

    // read from the text file we made earlier
    ifstream MyReadFile("filename.txt");

    // use while loop and and getline function to ready file line by line
    while(getline (MyReadFile, readFromFile)) {
        cout << readFromFile << "\n"; //outputs text from file
    }

    MyReadFile.close();
}