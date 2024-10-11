#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vec = {"Reuben", "Abi", "Marcus"};
    vector<string> vec2;
    string first = vec[0];
    int index = 0;
    while (!vec.empty())
    {
        for (int i = 0; i < vec.size(); i++)
        {
            if (int(vec[i][0]) < int(first[0]))
            {
                first = vec[i];
                index = i;
            }

            cout << "first: " << first << "\n";
        }
        
    }
}