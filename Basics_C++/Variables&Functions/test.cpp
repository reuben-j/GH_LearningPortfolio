#include <cctype>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(auto i : matrix) {
        for(auto y : i) {
            cout << y << endl;
        }
    }
}