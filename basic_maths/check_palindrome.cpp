#include <bits/stdc++.h>
using namespace std;

bool isPalindromeDivision(long long x)
{
    // Negative numbers can't be palindromes
    // Numbers ending with 0 (except 0 itself) can't be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0))
    {
        return false;
    }

    long long reversedHalf = 0;
    while (x > reversedHalf)
    {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }

    // For even digits: x == reversedHalf
    // For odd digits: x == reversedHalf/10 (middle digit doesn't matter)
    return x == reversedHalf || x == reversedHalf / 10;
}

bool isPalindromeString(long long n)
{
    // Negative numbers can't be palindromes
    // Numbers ending with 0 (except 0 itself) can't be palindromes
    if (n < 0 || (n % 10 == 0 && n != 0))
    {
        return false;
    }

    string s = to_string(n);
    long long st = 0, e = s.length() - 1;

    while (st < e)
    {
        if (s[st] != s[e])
            return false;
        st++;
        e--;
    }

    return true;
}

int main()
{
    long long n;
    cin >> n;

    // Division method
    bool d = isPalindromeDivision(n);
    cout << "Division method answer: " << d << endl;

    // String method
    bool s = isPalindromeString(n);
    cout << "String method answer: " << s << endl;

    return 0;
}