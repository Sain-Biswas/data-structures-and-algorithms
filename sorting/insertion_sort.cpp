#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr, int n)
{

    for (int i = 1; i < n; ++i)
    {
        int key = arr[i]; // Current element to be inserted
        int j = i - 1;

        // Shift elements greater than key to the right
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j]; // Single assignment per shift
            j--;
        }

        // Insert the key in its correct position
        arr[j + 1] = key;
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

    cout << "Before using Insertion sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "After using Insertion sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}