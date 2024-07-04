#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //TODO Declaring a Vector 
    vector<int> vect = {1, 2, 3, 4};
    //* basic declaration with elements displayed from start
    


    //TODO Declaring a vector
    vector<int> newVect; // see below for more .push_back() info 
    newVect.push_back(10);
    newVect.push_back(20);
    newVect.push_back(30);
    //* push_back puts the newest element at the back and moves everything else up +1
    


    //TODO Vector declaration
    vector<int> newerVect(3, 10);
    //* declare a vector of size 3 with each element having the value of 10
    
    

    //TODO Vector declaration
    int arr[] = {10, 20, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> newererVect(arr, arr + n);
    //* initialise a vector via the use of a string



    //TODO Vector declaration
    vector<int>vect2(vect.begin(), vect.end());
    //* using the top vector, initialise a vector from another whole vector   



    //TODO Vector declaration
    vector<int> vectNewest(10);
    int value = 4;
    fill(vectNewest.begin(), vectNewest.end(), value);
    //* using the fill function, turns all values to the specified value (4 in this case)



    //! Common Vector Functions //////////////////////////////////////////////////



    //TODO how to best iterate through vector
    vector<string> testVector = {"Reuben", "Abigail", "Marcus"};
    for(auto i : testVector) {
        cout << i << " "; //ouput Reuben Abigail Marcus
    }
    //* Utilising the auto variable, iterate easily through a vector



    //TODO vect.begin();.
    //TODO vect.end();
    for(vector<int>::iterator it = vect.begin(); it != vect.end(); ++it) {
        //!  cout << *it << " "; // output = 1 2 3 4
    }
    //* Using a for loop with an iterator type var, loop from beginning (vect.begin()) to end (vect.end()) and cout each element
    //* vect.begin() itself will return an iterator to the element of vect[0], allow you to derefence it and cout its value as shown in cout **<< *it**



    //TODO vector.at()
    vector<int> vec{12,23,34};
    //! cout << vec.at(0); //ouput 12
    //* Allow you to specify which position to access



    //TODO vect.empty()
        //! cout << vect.empty(); // output false
    //* returns a true or false to whether or not the vector is empty



    //TODO vect.size()
        //! cout << vect.size(); // output 4
    //* Returns the numbers of elements in the vector



    //TODO vect.capacity()
        //! cout << vec.capacity();
    //* Returns the size of the allocated storage of the container



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



    //TODO vector.push_back(value)
        vector<int> myVect3 = {1, 2, 3, 4};
        for(vector<int>::iterator x = myVect3.begin(); x != myVect3.end(); ++x) {
            //! cout << *x << " "; // output 1 2 3 4
        }  
        myVect3.push_back(5);
        for(vector<int>::iterator x = myVect3.begin(); x != myVect3.end(); ++x) {
            //! cout << *x << " "; // output 1 2 3 4 5
        } 
    //* Allow you to directly place a new element at the back of the vector and automatically increase container size



    //TODO vector.pop_back()
    vector<string> myVect4 = {"Hello", "Hiya", "Wassup"};
        for(vector<string>::iterator x = myVect4.begin(); x != myVect4.end(); ++x) {
            //! cout << *x << " "; // output = Hello Hiya Wassup
        } 
        myVect4.pop_back();
        for(vector<string>::iterator x = myVect4.begin(); x != myVect4.end(); ++x) {
            //! cout << *x << " "; // output = Hello Hiya
        } 
    //* Allow you to easily 'pop off' the last component of the vector and to automatically readjust the size of the vector



    //TODO vector.insert(position, value)
    vector<int> myVect5 = {123, 234, 345, 456};
        //! cout << myVect5[1] << endl; // output 234
    myVect5.insert(myVect5.begin() + 1, 6969);
        //! cout << myVect5[1]; // output 6969
    //* Allow you to insert a value at a specified positon and move other elements down the vector accordingly



    //TODO vector.emplace(position, value)
        vector<int> myVect6 = {90, 89, 78, 67};
            for(vector<int>::iterator x = myVect6.begin(); x != myVect6.end(); ++x) {
                //! cout << *x << " "; //ouput 90 89 78 67
            }

            myVect6.emplace(myVect6.begin(), 12);

            for(vector<int>::iterator x = myVect6.begin(); x != myVect6.end(); ++x) {
                //! cout << *x << " "; // output 12  90 89 78 67
            }
    //* Easy way to place a new element into the vector with a specific position and value



    //TODO assign(size, value)
    vector<int> myVect7 = {12};
        myVect7.assign(5, 25);
    for(vector<int>::iterator x = myVect7.begin(); x != myVect7.end(); ++x) {
        //! cout << *x <<  " "; //output 25 25 25 25 25 
    }
    //* Allow you to allocate a specified number of a certain variable



    //TODO erase(position), erase(startingPosition, endingPosition)
    vector<int> myNewVect = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        for(vector<int>::iterator x = myNewVect.begin(); x != myNewVect.end(); ++x) {
            //! cout << *x << " "; // outputs 1 2 3 4 5 6 7 8 9 10
        }
    myNewVect.erase(myNewVect.begin(), myNewVect.begin()+4);
        for(vector<int>::iterator x = myNewVect.begin(); x != myNewVect.end(); ++x) {
            //! cout << *x << " "; // outputs 5 6 7 8 9 10
        }
    //* Function to erase a certain position, or a range of positions. 



    //TODO clear
        //! myVect7.clear();
    //* Empties the whole vector of values



    //TODO vect.resize(new size)
    vector<int> VectSize{90, 80, 70};
        //! cout << VectSize.size() << endl << VectSize.capacity(); //ouput 3 3
    VectSize.resize(10);
        //! cout << endl << endl << VectSize.size() << endl << VectSize.capacity(); //ouput 10 10
    //* function to resize container capacity to given value
    //* if size is increased, so does capacity. But capacity can increase but size wont unless it is filled with values
    //* Capacity seems to be a reservation of space



    //TODO vect.reserve(new capacity)
    vector<int> VectCap{1, 2};
        //! cout << VectCap.capacity() << endl << VectCap.size() << endl; // output 0 0
    VectCap.reserve(1);
        //! out << endl << VectCap.capacity() << endl << VectCap.size(); //ouput 10 0
    //* function to reserve a specific amount of space. If has values in it, it will increase capacity to specified. If the reserve value is 
    //* less than the actual amount of values, no error will be thrown. 
}

// to update code runner to allow c++20 features, update json file using this link for info: 
// https://github.com/formulahendry/vscode-code-runner/issues/1052 