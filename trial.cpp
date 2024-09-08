#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void _3sum(vector<int> a, int target)
{
    vector<vector<int>> valueIndex; // value and index of i,j and k
    for (int i = 0; i < a.size(); i++)
    {
        vector<pair<int, int>> temp; // value, index
        for (int j = i + 1; j < a.size(); j++)
        {
            int k = -(a[i] + a[j]) + target;

            for (const auto &p : temp)
            {
                if (p.first == k)
                    valueIndex.push_back({a[i], i, p.first, p.second, a[j], j});
            }
            temp.emplace_back(a[j], j);
        }
    }

    for (auto i : valueIndex)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> a = {-1, 2, 2, -1, -2, -3, 0, 3};
    int targetSum = 0;
    _3sum(a, targetSum);
}