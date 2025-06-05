#include <bits/stdc++.h>
using namespace std;

// Recursive function to perform insertion sort
void recursiveInsertionSort(vector<int> &arr, int n)
{
    // Base case: single element is already sorted
    if (n <= 1)
    {
        return;
    }

    // First sort the first n-1 elements
    recursiveInsertionSort(arr, n - 1);

    // Insert the nth element into its correct position
    int key = arr[n - 1];
    int j = n - 2;

    // Shift elements greater than key to the right
    while (j >= 0 && arr[j] > key)
    {
        arr[j + 1] = arr[j];
        j--;
    }
    arr[j + 1] = key;
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

    cout << "Before using recursive insertion sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    recursiveInsertionSort(arr, n);

    cout << "After using recursive insertion sort: ";
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}