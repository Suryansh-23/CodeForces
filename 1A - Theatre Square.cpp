#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m, n, a;
    cin >> m >> n >> a;
    // cout << (float)m / (float)a << endl;
    cout << (long long int)(ceil((double)m / (double)a) * ceil((double)n / (double)a)) << endl;
}
