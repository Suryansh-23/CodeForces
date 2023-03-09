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

bool solve(ll i, ll x, ll min) {
    while (i > 0 && x > 0) {
        pr2(i, x);
        x -= (a[i] - min);
        a.erase(a.begin() + i);

        if (i == 0) {
            i = a.size() - 1;
        } else {
            i = 0;
        }
    }

    return x == 0;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, i, min;
    vei a;
    tc {
        inp(n) inp(x);
        lp(n) {
            a.push_back(inp_fn());
        }

        min = a[0];
        loopi(1, n) {
            if (a[i] < min)
                min = a[i];
        }

        x -= min;
        i = 0;
        solve(i, x, min);
        i = 
        solve(i, x, min);

        if (x == 0) {
            yes;
        } else {
            no;
        }
    }
    return 0;
}