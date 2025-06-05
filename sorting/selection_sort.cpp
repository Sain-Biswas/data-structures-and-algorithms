#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr, int n)
{
    // selection sort
    for (int i = 0; i < n - 1; ++i)
    {
        // Find the minimum element in unsorted array
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }

        // Swap only if necessary
        if (min_idx != i)
        {
            swap(arr[i], arr[min_idx]);
        }
    }
}

int main()
{
    int n, e;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        cin >> e;
        arr.push_back(e);
    }

    cout << "Before using selection sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);

    cout << "After using selection sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
