#include <bits/stdc++.h>
using namespace std;

long long int countDigitsLogarithm(long long int n)
{
    long long int cnt = (long long int)(log10(n) + 1);

    return cnt;
}

long long int countDigitString(long long int n)
{
    string s = to_string(n);

    return s.length();
}

int main()
{
    // Get the input integer
    long long int n;
    cin >> n;

    // Logarithm method
    long long int log = countDigitsLogarithm(n);
    cout << "Log method answer: " << log << endl;

    // String Length method
    long long int str = countDigitString(n);
    cout << "String length method answer: " << str << endl;

    return 0;
}