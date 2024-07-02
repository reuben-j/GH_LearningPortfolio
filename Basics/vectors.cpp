// C++ program to initialize 
// a vector like an array.
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect { 10, 20, 30 };

    for (int x : vect)
        cout << x << " ";

    return 0;
}

// to update code runner to allow c++20 features, update json file using this link for info: 
// https://github.com/formulahendry/vscode-code-runner/issues/1052 