#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //! Declaring a Vector 

    vector<int> vect = {1, 2, 3, 4};
    //* basic declaration with elements displayed from start
    


    vector<int> newVect; // see below for more .push_back() info 
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



    //! Common Vector Functions



    //TODO vect.begin();.
    //TODO vect.end();
    for(vector<int>::iterator it = vect.begin(); it != vect.end(); ++it) {
        // cout << *it << " ";
    }
    //* output = 1 2 3 4
    //* Using a for loop with an iterator type var, loop from beginning (vect.begin()) to end (vect.end()) and cout each element
    //* vect.begin() itself will return an iterator to the element of vect[0], allow you to derefence it and cout its value as shown in cout **<< *it**



    //TODO vect.empty()
        //! cout << vect.empty();
    //* returns a true or false to whether or not the vector is empty



    //TODO vect.size()
        //! cout << vect.size();
    //* Returns the numbers of elements in the vector



    //TODO (  =  ) equals operator
    vector<int> myVect1 = {1, 2 };
    vector<int> myVect2 = {4, 5, 6, 7};
    //! cout << myVect1.size() << endl; // cout size of original vector with size of 2
    myVect1 = myVect2; // assign new contents and allocate necessary storage
    for(vector<int>::iterator it = myVect1.begin(); it != myVect1.end(); ++it) {
        //! cout  << *it << " "; // output = 4 5 6 7
        }
    //! cout << endl << myVect1.size(); // cout new size of 4
    //* Allows for the reassignment of vectors using the = operator. This automatically readjusts size of container and maintains order. 



    //TODO (  []  ) square brackets operator
    //! cout << myVect2[0]; //output 4
    //* Cout the exact element with the given reference



    //TODO vector.front()
    //! cout << myVect2.front(); //output 4
    //* Allow you to specifically get reference to first element of the vector



    //TODO vector.back()
    //! cout << myVect2.back(); //output 7
    //* Allow you to specifically get reference to the last element of the vector



    //TODO vector.push_back()
        vector<int> myVect3 = {1, 2, 3, 4};
        for(vector<int>::iterator x = myVect3.begin(); x != myVect3.end(); ++x) {
            //! cout << *x << " ";
        } // output 1 2 3 4 
        myVect3.push_back(5);
        for(vector<int>::iterator x = myVect3.begin(); x != myVect3.end(); ++x) {
            //! cout << *x << " ";
        } // output 1 2 3 4 5
    //* Allow you to directly place a new element at the back of the vector and automatically increase container size
}

// to update code runner to allow c++20 features, update json file using this link for info: 
// https://github.com/formulahendry/vscode-code-runner/issues/1052 