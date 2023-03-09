#include <iostream>
using namespace std;

int main()
{
    int n, x = 0, y = 0, z = 0, tmp;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        cin >> tmp;
        x += tmp;

        cin >> tmp;
        y += tmp;

        cin >> tmp;
        z += tmp;
    }
    if (x == 0 && y == 0 && z == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
