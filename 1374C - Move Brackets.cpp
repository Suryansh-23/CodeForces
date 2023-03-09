#include <iostream>
using namespace std;

int main()
{
    int t, n, last;
    char tmp;
    string seq;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (auto i = 0; i < n; i++)
        {
            cin >> tmp;
            // cout << tmp << " `" << seq << "` " << last << endl;
            if (seq.length() > 0)
            {
                if (tmp == ')' && seq[last] == *"(")
                {
                    seq.pop_back();
                    last--;
                }
                else
                {
                    seq += tmp;
                    last++;
                }
            }
            else
            {
                seq = tmp;
                last = 0;
            }
        }
        // cout << tmp << " " << seq << endl;

        cout << seq.length() / 2 << endl;
        seq.clear();
    }
    return 0;
}
