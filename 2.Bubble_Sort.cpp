#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v{1, 7, 6, 10, 9, 14};
    int n = v.size();
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swapped = true;
                swap(v[j], v[j + 1]);
            }
        }
        if (swapped == false)
        {
            break;
        }
    }

    // printing
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}