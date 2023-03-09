#include <stdbool.h>
#include <iostream>
using namespace std;

bool is_beaut(int a, int b, int c, int d)
{
    return a < b && c < d && a < c && b < d;
}

int main()
{
    int t, a, b, c, d;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c >> d;
        if (is_beaut(a, b, c, d))
        {
            cout << "YES" << endl;
        }
        else if (is_beaut(c, a, d, b))
        {
            cout << "YES" << endl;
        }
        else if (is_beaut(d, c, b, a))
        {
            cout << "YES" << endl;
        }
        else if (is_beaut(b, d, a, c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
