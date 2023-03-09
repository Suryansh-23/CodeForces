#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits>
#include <unordered_map>
#include <unordered_set>
#include <vector>

#define loop(a, b) for (ll i = a; i < b; i++)
#define lp(a) loop(0, a)
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
    int n, m, k, tmp, b = 0, r = 0;

    inp(n) inp(m) inp(k);
    lp(n) {
        inp(tmp);
        if (tmp == 1) {
            b += 1;
        } else {
            r += 1;
        }
    }

    // pr_(b) pr_(r);
    // lf;

    if (b >= m) {
        if (k >= r) {
            pr(b - m);
        } else {
            pr(b - m + r - k);
        }
    } else {
        if (k + (m - b) >= r) {
            pr(0);
        } else {
            pr(r - (k + (m - b)));
        }
    }
    return 0;
}