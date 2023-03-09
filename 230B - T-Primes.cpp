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
typedef pair<int, int> pii;
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

// waf to check if a no. is prime or not using a fermat's little theorem
inline bool is_prime(ull n) {
    if (n == 2) {
        return true;
    }

    if (n == 1) {
        return false;
    }

    ll a = 2;
    ll x = pow(a, n - 1);

    return x % n == 1;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    ull num;

    inp(n);
    lp(n) {
        inp(num);

        if (num == 1) {
            no;
        } else if (num % 2 == 0) {
            if (num == 4) {
                yes;
            } else {
                no;
            }
        } else {
            if (is_prime(num)) {
                no;
            } else {
                yes;
            }
        }
    }

    return 0;
}