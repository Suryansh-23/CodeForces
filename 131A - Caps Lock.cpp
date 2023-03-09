#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    bool chk;
    string s, tmp_s;
    cin >> s;
    if (65 <= s[0] && s[0] <= 90)
    {
        chk = true;
        tmp_s = s[0] + 32;
        for (auto i = 1; i < s.length(); i++)
        {
            tmp_s += (s[i] + 32);

            if (!(65 <= s[i] && s[i] <= 90))
            {
                chk = false;
                break;
            }
        }

        if (chk)
        {
            cout << tmp_s;
        }
        else
        {
            cout << s;
        }
    }
    else
    {
        chk = true;
        tmp_s = s[0] - 32;
        for (auto i = 1; i < s.length(); i++)
        {
            tmp_s += (s[i] + 32);

            if (!(65 <= s[i] && s[i] <= 90))
            {
                chk = false;
                break;
            }
        }
        if (chk)
        {
            cout << tmp_s;
        }
        else
        {
            cout << s;
        }
    }

    return 0;
}
