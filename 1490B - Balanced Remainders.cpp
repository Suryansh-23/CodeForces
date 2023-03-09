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
typedef pair<ll, ll> pii;
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
    ll r = a % b;
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

    ll n, a[30000];
    pii c[3];
    tc {
        inp(n) inp_seq(n, a);

        c[0] = pii(0, 0);
        c[1] = pii(0, 1);
        c[2] = pii(0, 2);
        lp(n) {
            c[a[i] % 3].first++;
        }

        sort(c, c + 3);

        lp(3) {
            pr2(c[i].first, c[i].second);
        }

        if (c[0].first == c[1].first && c[1].first == c[2].first) {
            pr(0);
        } else if (c[1].first == n / 3) {
            pr((n / 3 - c[0].first) * abs(c[2].second - c[0].second));
        } else {
        }
    }
    return 0;
}