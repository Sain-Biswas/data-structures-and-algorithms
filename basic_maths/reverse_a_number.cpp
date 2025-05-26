#include <bits/stdc++.h>
using namespace std;

long long reverseNumberString(long long n)
{
    string r = to_string(abs(n));

    reverse(r.begin(), r.end());

    return (n < 0) ? -1 * stoll(r) : stoll(r);
}

long long reverseNumberRemainder(long long n)
{
    long long r = 0, t = abs(n), d;

    while (t != 0)
    {
        d = t % 10;
        t /= 10;

        r = r * 10 + d;
    }

    return (n < 0) ? -1 * r : r;
}

int main()
{
    long long n;
    cin >> n;

    // String method
    long long s = reverseNumberString(n);
    cout << "String method answer: " << s << endl;

    // Remainder method
    long long r = reverseNumberRemainder(n);
    cout << "Remainder method answer: " << r << endl;

    return 0;
}