#include <bits/stdc++.h>
using namespace std;

// Unoptimized bubble sort function
// Parameters:
//   arr - vector to be sorted
//   n - size of the vector
void bubbleSortUnoptimized(vector<int> &arr, int n)
{
    // Outer loop: goes from last element to first
    // Each iteration places the largest unsorted element in its correct position
    for (int i = n - 1; i >= 0; i--)
    {
        // Inner loop: compares adjacent elements up to the current unsorted portion
        for (int j = 0; j <= i - 1; j++)
        {
            // If current element is greater than next, swap them
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

// Optimized bubble sort function
// Parameters:
//   arr - vector to be sorted (passed by reference, so it modifies the original)
//   n - size of the vector
void bubbleSortOptimized(vector<int> &arr, int n)
{
    // Outer loop same as unoptimized version
    for (int i = n - 1; i >= 0; i--)
    {
        // Flag to check if any swaps occurred in this pass
        bool swapped = false;

        // Inner loop compares adjacent elements
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap elements
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                swapped = true;
            }
        }

        // If no swaps occurred, the array is already sorted
        if (!swapped)
        {
            break;
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

    // Make a copy of the original array for the unoptimized sort
    vector<int> arrCopy = arr;

    cout << "Before using unoptimized sorting: ";
    for (int i = 0; i < n; i++)
    {
        cout << arrCopy[i] << " ";
    }
    cout << endl;

    // Call unoptimized bubble sort
    bubbleSortUnoptimized(arrCopy, n);

    cout << "After using unoptimized bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arrCopy[i] << " ";
    }
    cout << endl;

    cout << "Before using optimized bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call optimized bubble sort
    bubbleSortOptimized(arr, n);

    cout << "After using optimized bubble sort: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}