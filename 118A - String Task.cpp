#include <iostream>
using namespace std;

int main()
{
    string s, fs = "";
    cin >> s;
    for (auto i = 0; i < s.length(); i++)
    {
        // cout << fs << endl;
        if (65 <= s[i] && s[i] <= 90)
        {
            s[i] += 32;
        }

        if (!(s[i] == 'a' || s[i] == 'o' || s[i] == 'y' || s[i] == 'e' || s[i] == 'u' || s[i] == 'i'))
        {
            fs = fs + '.' + s[i];
        }
    }

    cout << fs << endl;

    return 0;
}
