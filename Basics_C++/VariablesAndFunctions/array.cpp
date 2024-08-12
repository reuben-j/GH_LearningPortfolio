#include <iostream>

using namespace std;

int main() {
    int numArray[] = {132, 41, 9, 1242, 764, 55};

    
    int size = sizeof(numArray) / sizeof(numArray[0]); 

    for(int i = 0; i < size; i++) {
        cout << numArray[i] << " ";
    }
    cout << endl;
    sort(numArray, numArray+size, greater<int>());

    for(int i = 0; i < size; i++) {
        cout << numArray[i] << " ";
    }

    
    
}