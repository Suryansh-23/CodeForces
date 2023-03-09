#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, c, mx;
    cin >> a >> b >> c;

    mx = max((a * b) + c, (a + b) * c);
    mx = max(mx, a + (b * c));
    mx = max(mx, a * (b + c));
    mx = max(mx, a * b * c);
    mx = max(mx, a + b + c);

    cout << mx;

    return 0;
}
