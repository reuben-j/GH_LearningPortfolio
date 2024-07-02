#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //! declaring a vector 

    vector<int> vect = {1, 2, 3, 4};
    //* basic declaration with elements displayed from start
    

    vector<int> newVect;
    newVect.push_back(10);
    newVect.push_back(20);
    newVect.push_back(30);
    //* push_back puts the newest element at the back and moves everything else up +1
    

    vector<int> newerVect(3, 10);
    //* declare a vector of size 3 with each element having the value of 10
    
    
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> newererVect(arr, arr + n);
    //* initialise a vector via the use of a string


    vector<int>vect2(vect.begin(), vect.end());
    //* using the top vector, initialise a vector from another whole vector   


    vector<int> vectNewest(10);
    int value = 4;
    fill(vectNewest.begin(), vectNewest.end(), value);
    //* using the fill function, turns all values to the specified value (4 in this case)
}

// to update code runner to allow c++20 features, update json file using this link for info: 
// https://github.com/formulahendry/vscode-code-runner/issues/1052 