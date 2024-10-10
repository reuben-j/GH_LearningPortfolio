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

    while (myVec.size() != 0)
    {
        for (int i = 1; i < myVec.size(); i++)
        {

            cout << myVec[i] << " Vs " << min << "\n";

            if (myVec[i] < min)
            {
                min = myVec[i];
                index = i;
            }
        }
        newVec.insert(newVec.end(), min);
        // 
        cout << "Size: " << myVec.size() << "\n";
        cout << "Leftover: " << myVec[1] << "\n";
        myVec.pop_back();
        cout << "index: " << index << "\n";
        // myVec.erase(myVec.begin() + index - 1);
    }
    cout << "Min: " << min << "\n";

    for (auto i : newVec)
    {
        cout << i << "\n";
    }
}