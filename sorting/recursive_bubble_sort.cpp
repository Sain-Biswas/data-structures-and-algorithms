#include <bits/stdc++.h>
using namespace std;

void recursiveBubbleSort(vector<int> &arr, int n)
{
    // Base case: array with 0 or 1 element is already sorted
    if (n <= 1)
    {
        return;
    }

    // One pass of bubble sort (moves largest element to end)
    bool swapped = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            swapped = true;
        }
    }

    // If no swaps occurred, array is already sorted
    if (!swapped)
    {
        return;
    }

    // Recursively sort the remaining elements
    recursiveBubbleSort(arr, n - 1);
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

    cout << "Before using recursive bubble sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    recursiveBubbleSort(arr, n);

    cout << "After using recursive bubble sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}