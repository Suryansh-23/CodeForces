#include <algorithm>
#include <iostream>
using namespace std;
typedef pair<int, int> pint; // 1st int = x_i & 2nd int = y_i

int main()
{
    bool pass = true;
    int s, n, x, y, i;
    cin >> s >> n;
    pint arr[n] = {};
    pint tmp = pint(1, 2);

    // for (auto i = 0; i < n; i++)
    // {
    //     cin >> x >> y;
    //     mp[x] += y;
    // }

    for (auto i = 0; i < n; i++)
    {
        cin >> x >> y;
        arr[i] = pint(x, y);
    }

    sort(arr, arr + n);

    // for (auto i = 0; i < n; i++)
    // {
    //     cout << arr[i].first << " # " << arr[i].second << endl;
    // }

    pass = true;
    i = 0;
    while (i < n)
    {
        if (s > arr[i].first)
        {
            s += arr[i].second;
        }
        else
        {
            cout << "NO" << endl;
            pass = false;
            break;
        }
        i++;
    }

    // for (auto &[key, value] : mp)
    // {
    //     cout << key << " # " << value;
    // }

    if (pass)
    {
        cout << "YES" << endl;
    }

    return 0;
}
