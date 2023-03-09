#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1;
        return 0;
    }
    else
    {
        switch (n % 4)
        {
        case 0:
            cout << 6;
            return 0;
        case 1:
            cout << 8;
            return 0;
        case 2:
            cout << 4;
            return 0;
        case 3:
            cout << 2;
            return 0;
        }
    }
    return 0;
}
