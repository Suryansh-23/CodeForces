#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <limits>
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

// int main(void) {
//     ll n;
//     tc {
//         inp(n);
//     }
//     return 0;
// }

int main(void) {
    ll n;
    string r1, r2;
    bool chk;
    tc {
        inp(n) inp(r1) inp(r2);

        chk = false;
        lp(n) {
            if (r1[i] == 'R') {
                if (r1[i] != r2[i]) {
                    chk = true;
                    break;
                };
            } else {
                if (r2[i] != 'G' && r2[i] != 'B') {
                    chk = true;
                    break;
                }
            }
        }

        if (chk) {
            no;
        } else {
            yes;
        }
    }
    return 0;
}