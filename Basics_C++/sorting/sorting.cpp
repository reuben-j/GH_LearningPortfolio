#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> newVec) {
    cout << "\n";
    for (auto i : newVec)
    {
        cout << i << "-";
    }
    cout << "\n";
}

int main()
{

    vector<int> myVec = {112, 23, 313, 12, 842, 1, 10, 4};
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
        newVec.insert(newVec.begin(), min);
      //  cout << "Size: " << myVec.size() << "\n";
       // cout << "index: " << index << "\n";
        if(myVec.size() >= 1) {
            int temp = myVec.back();
            cout << "\nBack: " << myVec.back();
            int temp2 = myVec[index];
            myVec.back() = temp2;
            myVec[index] = temp;
            myVec.pop_back();
            cout << "Last: " <<myVec.back() << " ";
            printVec(myVec);
        } else myVec.pop_back();
        min = myVec.front();
      
        
    }
    cout << "Min: " << min << "\n";

    printVec(newVec);


}

/*
newVec.insert(newVec.end(), min);
        //
        cout << "Size: " << myVec.size() << "\n";
        cout << "Leftover: " << myVec[1] << "\n";
      //  myVec.pop_back();
        cout << "index: " << index << "\n";
        myVec.erase(myVec.begin() + index);
*/

