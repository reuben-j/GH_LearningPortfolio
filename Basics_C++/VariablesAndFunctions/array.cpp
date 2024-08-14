#include <iostream>

using namespace std;

int main() {
    //declare array
    int numArray[] = {132, 41, 9, 1242, 764, 55};

    //get size of array
    int size = sizeof(numArray) / sizeof(numArray[0]); 

    // print array elements unsorted
    for(int i = 0; i < size; i++) {
        cout << numArray[i] << " ";
    }
    cout << endl;
    
    // sort array in descending ordeer
    sort(numArray, numArray+size, greater<int>());

    //  loop through sorted array
    for(int i = 0; i < size; i++) {
        cout << numArray[i] << " ";
    }

    // for each loop
    cout << endl;
    for(auto i : numArray) {
        cout << i << " ";
    }


}