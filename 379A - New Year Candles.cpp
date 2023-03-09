#include <iostream>
using namespace std;

int main()
{
    int a, b, t, burned;
    cin >> a >> b;

    t = burned = a;
    while (burned >= b)
    {
        // cout << t << " " << burned << endl;
        t += burned / b;
        burned = burned / b + (burned % b);
    }

    cout << t << endl;
}
