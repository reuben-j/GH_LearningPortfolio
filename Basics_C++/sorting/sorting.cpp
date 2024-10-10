#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> myVec = {112, 23, 313, 12, 842, 13, 10, 4};
    vector<int> newVec;
    newVec.reserve(myVec.size());

    cout << "Unsorted: ";
    for (auto i : myVec)
    {
        cout << i << " ";
    }

    cout << '\n';
    int min = myVec[0];
    int index;

    for (int i = 1; i < myVec.size(); i++)
    {

        cout << myVec[i] << " Vs " << min << "\n";

        if (myVec[i] < min)
        {
            min = myVec[i];
            index = i;
        }
    }
    cout << "Min: " << min << "\n";
}