#include <bits/stdc++.h>
using namespace std;

long long findGcdEuclidean(long long a, long long b)
{
    // Continue loop as long as both
    // a and b are greater than 0
    while (a > 0 && b > 0)
    {
        // If a is greater than b,
        // subtract b from a and update a
        if (a > b)
        {
            // Update a to the remainder
            // of a divided by b
            a = a % b;
        }
        // If b is greater than or equal
        // to a, subtract a from b and update b
        else
        {
            // Update b to the remainder
            // of b divided by a
            b = b % a;
        }
    }
    // Check if a becomes 0,
    // if so, return b as the GCD
    if (a == 0)
    {
        return b;
    }
    // If a is not 0,
    // return a as the GCD
    return a;
}

int findGcdStein(int a, int b)
{
    // GCD(0, b) == b; GCD(a, 0) == a
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // Find common factors of 2
    int shift;
    for (shift = 0; ((a | b) & 1) == 0; ++shift)
    {
        a >>= 1;
        b >>= 1;
    }

    // Remove remaining factors of 2 from a
    while ((a & 1) == 0)
        a >>= 1;

    do
    {
        // Remove remaining factors of 2 from b
        while ((b & 1) == 0)
            b >>= 1;

        if (a > b)
            std::swap(a, b);

        b -= a;
    } while (b != 0);

    return a << shift;
}

int main()
{
    long long a, b;
    cin >> a >> b;

    // Euclidean algorithm
    long long e = findGcdEuclidean(a, b);
    cout << "Euclidean method answer: " << e << endl;

    // Inbuilt method
    long long i = gcd(a, b);
    cout << "Inbuilt method answer: " << i << endl;

    // Stein method
    long long s = gcd(a, b);
    cout << "Stein method answer: " << s << endl;

    return 0;
}