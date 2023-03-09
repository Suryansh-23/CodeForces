#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long int n, t, num;
    cin >> n >> t;

    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1;
        }
        else
        {
            cout << 1;
            for (auto i = 1; i < n; i++)
            {
                cout << 0;
            }
        }
    }
    else
    {
        for (auto i = 0; i < n; i++)
        {
            cout << t;
        }
    }
}
