#include <bits/stdc++.h>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int t, n, k, min_p, tmp, i;
    vector<int> health, power;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (auto i = 0; i < n; i++)
        {
            cin >> tmp;
            health.push_back(tmp);
        }
        for (auto i = 0; i < n; i++)
        {
            cin >> tmp;
            power.push_back(tmp);
        }

        while (k > 0 && health.size() > 0)
        {
            // for (const int &i : health)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;
            // for (const int &i : power)
            // {
            //     cout << i << " ";
            // }
            // cout << endl;

            while (i < health.size())
            {
                if (health.at(i) > k)
                {
                    health.at(i) = health.at(i) - k;
                    i++;
                }
                else
                {
                    health.erase(health.begin() + i);
                    power.erase(power.begin() + i);
                }
            }

            if (power.size() == 0)
            {
                break;
            }
            min_p = power.at(0);
            for (auto i = 1; i < power.size(); i++)
            {
                tmp = power.at(i);
                if (tmp < min_p)
                {
                    min_p = tmp;
                }
            }

            cout << min_p << endl;
            k -= min_p;
        }

        if (k > 0)
        {
            cout << "YES" << endl;
        }
        else if (health.size() == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        health.clear();
        power.clear();
    }

    return 0;
}
