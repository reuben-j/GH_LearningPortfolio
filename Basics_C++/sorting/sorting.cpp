#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec = {21, 123, 2134, 4032, 345, 5413, 100};
    vector<int> newVec;

    while (!vec.empty())
    {
        int max = vec[0];
        int index = 0;

        // Find the maximum element in the remaining `vec`
        for (int i = 1; i < vec.size(); i++)
        {
            if (max < vec[i])
            {
                max = vec[i];
                index = i;
            }
        }

        // Add max to newVec and remove it from vec
        newVec.push_back(max);
        vec.erase(vec.begin() + index);

        // Output current state of newVec
        cout << "newVec: ";
        for (auto i : newVec)
        {
            cout << i << "-";
        }
        cout << "\n";
    }

    cout << "\nSorted (newVec): ";
    for (auto i : newVec)
    {
        cout << i << "-";
    }
    cout << "\n";

    cout << "Remaining Original (vec): ";
    for (auto i : vec)
    {
        cout << i << "-";
    }
    cout << "\n";

    return 0;
}
