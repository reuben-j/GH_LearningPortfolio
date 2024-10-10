#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> myVec = {112, 23, 313, 901, 842, 13, 24, 531, 42, 55};
    vector<int> newVec;

    for (auto i : myVec)
    {
        cout << i << " ";
    }

    cout << '\n';

    for (int i = 0; i < myVec.size() -1; i++)
    {
        int min, max, absmax;
        while(myVec[i] > myVec[i + 1]) {
            min = myVec[i]; // value held in min
            max = myVec[i + 1];
            myVec[i] = min;
            myVec[i + 1] = max;
        }
        
    }
    cout << "\n------\n";
    for (auto i : myVec)
    {
        cout << i << " ";
    }
}