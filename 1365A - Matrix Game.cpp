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

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, count;
    tc {
        inp(n) inp(m);
        int a[n][m] = {};

        lp(n) {
            loopj(0, m) {
                inp(a[i][j]);
            }
        }

        count = 0;
        lp(n) {
            loopj(0, m) {
                if (a[i][j] == 0) {
                    // pr2(i, j);
                    if (i > 0 && a[i - 1][j] == 1) {
                        continue;
                    }
                    if (i < n - 1 && a[i + 1][j] == 1) {
                        continue;
                    }
                    if (j > 0 && a[i][j - 1] == 1) {
                        continue;
                    }
                    if (j < m - 1 && a[i][j + 1] == 1) {
                        continue;
                    }
                    a[i][j] = 1;
                    count++;
                }
            }
        }
        // pr(count);
        // lf;

        if (count % 2 == 0) {
            pr("Vivek");
        } else {
            pr("Ashish");
        }
    }

    return 0;
}