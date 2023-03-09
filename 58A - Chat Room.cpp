#include <iostream>
using namespace std;

int main()
{
    int p1 = 0, p2 = 0;
    string s, ref = "hello";
    cin >> s;
    // for (auto i = 1; i < s.length(); i++)
    // {
    //     if (s[i] == s[i - 1])
    //     {
    //         s.erase(i, 1);
    //     }
    // }
    // cout << s << endl;
    while (p1 < s.length() && p2 < s.length())
    {
        if (s[p1] == ref[p2])
        {
            p1++;
            p2++;
        }
        else
        {
            p1++;
        }
    }

    if (p2 == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
