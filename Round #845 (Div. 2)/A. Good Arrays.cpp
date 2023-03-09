#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define loopi(a, b) for (ll i = a; i < b; i++)
#define loopj(a, b) for (ll j = a; j < b; j++)
#define loopk(a, b) for (ll k = a; k < b; k++)
#define lp(a) loopi(0, a)
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define lf cout << endl;
#define pr_(x) cout << x << " ";
#define pr(x) cout << x << endl;
#define pr2(x, y) cout << x << " " << y << endl;
#define pr_seq(seq)      \
    for (auto i : seq) { \
        pr_(i);          \
    }                    \
    lf
#define pr_map(mp)                  \
    for (const auto &[k, v] : mp) { \
        pr2(k, v);                  \
    }
#define inp(x) cin >> x;
#define inp_seq(n, arr)        \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define tc  \
    ll t;   \
    inp(t); \
    while (t--)
#define swap(a, b)    \
    {                 \
        auto tmp = a; \
        a = b;        \
        b = tmp;      \
    }

using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vei;
typedef vector<string> vestr;
typedef unordered_map<ll, ll> counter;

const ll cmod = 1000000007;

inline ll inp_fn() {
    ll tmp;
    inp(tmp);
    return tmp;
}

ll gcd(ll a, ll b) {
    ll r = a % b, tmp;
    while (r != 0) {
        a = b;
        b = r;
        r = a % b;
    }
    return b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, ops, i;
    tc {
        ops = 0;
        inp(n);
        vei a;
        lp(n) {
            a.push_back(inp_fn());
        }

        // auto ai = a.begin();
        // lp(n - 1) {
        //     pr(a.at(i));
        // }
        if (n != 1) {
            i = 0;
            while (i < a.size() - 1) {
                // pr2("#", i);
                if ((a.at(i) % 2) == (a.at(i + 1) % 2)) {
                    // pr2(a.at(i), a.at(i + 1));
                    a.at(i + 1) = a.at(i) * a.at(i + 1);
                    a.erase(a.begin() + i);
                    ops++;
                } else {
                    i++;
                }
            }

            pr(ops);
        } else {
            pr(0);
        }
        // cout
    }
    return 0;
}