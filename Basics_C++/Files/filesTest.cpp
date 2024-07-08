#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // create and open a text file
    ofstream MyFile("filename.txt");

    // write to file
    MyFile << "I am testing, this should write to the file I created above!";

    // close file
    MyFile.close();
}