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

    int n, j;
    vei a;
    tc {
        inp(n);
        lp(n) {
            a.push_back(inp_fn());
        }

        sort(a.begin(), a.end());

        for (int i = 0; i < a.size(); i++) {
            j = 0;
            while (j < a.size()) {
                // pr2(a[i], a[j]);
                if (i == j) {
                    j++;
                    continue;
                }

                if (abs(a[i] - a[j]) == 1) {
                    a.erase(a.begin() + i);
                    if (i < j)
                        a.erase(a.begin() + j - 1);
                    else
                        a.erase(a.begin() + j);
                    // pr("near");
                    continue;
                }

                if (a[i] % 2 == a[j] % 2) {
                    a.erase(a.begin() + i);
                    if (i < j)
                        a.erase(a.begin() + j - 1);
                    else
                        a.erase(a.begin() + j);
                    // pr("parity");
                    continue;
                }

                j++;
            }
        }

        if (a.size() == 0) {
            yes;
        } else {
            no;
        }

        a.clear();
    }
    return 0;
}