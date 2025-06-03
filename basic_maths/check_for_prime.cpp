
#include <bits/stdc++.h>
using namespace std;

// Function to check if a
// given number is prime.
bool checkPrimeSqrt(int n)
{

    // Initialize a counter variable to
    // count the number of factors.
    int cnt = 0;

    // Loop through numbers from 1
    // to the square root of n.
    for (int i = 1; i <= sqrt(n); i++)
    {

        // If n is divisible by i
        // without any remainder.
        if (n % i == 0)
        {

            // Increment the counter.
            cnt = cnt + 1;

            // If n is not a perfect square,
            // count its reciprocal factor.
            if (n / i != i)
            {
                cnt = cnt + 1;
            }
        }
    }

    // If the number of
    // factors is exactly 2.
    if (cnt == 2)
    {

        // Return true, indicating
        // that the number is prime.
        return true;
    }

    // If the number of
    // factors is not 2.
    else
    {

        // Return false, indicating
        // that the number is not prime.
        return false;
    }
}

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Check for factors up to sqrt(n)
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    bool isPrimeSqrt = checkPrimeSqrt(n);

    cout << "Square root method: ";
    if (isPrimeSqrt)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    bool isPrimeOptimized = isPrime(n);

    cout << "Optimized skip method method: ";
    if (isPrimeOptimized)
    {
        cout << n << " is a prime number." << endl;
    }
    else
    {
        cout << n << " is not a prime number." << endl;
    }

    return 0;
}
