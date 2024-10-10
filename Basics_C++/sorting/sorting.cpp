#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> myVec = {112, 23, 313, 12, 842, 13, 10, 4};
    

    for (auto i : myVec)
    {
        cout << i << " ";
    }

    cout << '\n';
    int temp = myVec[0];
    cout << "Index 0: " << myVec[0] << "\n";
    int min = 0, max = 0;

    for (int i = 1; i < myVec.size(); i++)
    {
        
        cout << myVec[i] << " Vs " << temp << "\n";
        
        if (myVec[i] < temp)
        {
            temp = myVec[i];
        } 
        cout << "Min: " << temp << "\n";

    }
}