#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{10, 1, 7, 6, 14, 9};
    int n = v.size();

    // insertion sort
    for (int round = 1; round < n; round++)
    {
        int val = v[round];
        int j = round - 1;
        for (; j >= 0; j--)
        {
            if (v[j] > val)
            {
                v[j + 1] = v[j];
            }
            else
            {
                break;
            }
        }
        v[j + 1] = val;
    }
    // printing
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}