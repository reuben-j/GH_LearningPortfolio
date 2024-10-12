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
        }
        vec2.push_back(first);
        vec.erase(vec.begin() + index);
        // vec.pop_back();
    }
    int num = 0;
    for (auto i : vec2)
    {
        cout << num << ": " << i << "\n";
        num++;
    }
}