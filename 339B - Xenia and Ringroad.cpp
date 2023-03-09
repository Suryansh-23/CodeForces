#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    long long int n, m, i, t;
    cin >> n >> m;
    long long int arr[m];
    for (auto i = 0; i < m; i++)
    {
        cin >> arr[i];
    }

    i = 1;
    t = arr[0] - 1;
    while (i < m)
    {
        if (arr[i - 1] > arr[i])
        {
            t += (n - (arr[i - 1] - arr[i]));
        }
        else
        {
            t += arr[i] - arr[i - 1];
        }
        i++;
    }

    cout << t;
    return 0;
}
