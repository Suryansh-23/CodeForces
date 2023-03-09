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

// Approach: Naively utilizes graphs to traverse the path and find the max sum
/*ll traverse_sum(int pos, ll sum, vector<ll> a, unordered_map<ll, vector<ll>> gr) {
    // pr2(pos, sum);
    if (gr[pos].size() == 0) {
        return sum;
    }

    for (auto i : gr[pos]) {
        sum = max(sum, traverse_sum(i, sum + a[i], a, gr));
    }

    return sum;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, s;
    vector<ll> a;
    unordered_map<ll, vector<ll>> gr;
    tc {
        s = 0;
        inp(n);
        lp(n) {
            a.push_back(inp_fn());
        }

        lp(n) {
            if (i + a[i] < n) {
                gr[i].push_back(i + a[i]);
            } else {
                gr[i].clear();
            }
        }

        // for (auto i : gr) {
        //     pr2(i.first, ":");
        //     pr_seq(i.second);
        // }

        lp(n) {
            // pr("#");
            s = max(s, traverse_sum(i, a[i], a, gr));
            // lf;
        }

        pr(s);

        a.clear();
        gr.clear();
    }
    return 0;
}*/

// Approach: Uses DP to store the max sum at each position
int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    vector<ll> a;
    tc {
        inp(n);
        lp(n) {
            a.push_back(inp_fn());
        }

        vector<ll> dp(n);

        for (int i = n - 1; i >= 0; i--) {
            dp[i] = a[i];
            if (i + a[i] < n) {
                dp[i] += dp[a[i] + i];
            }
        }

        // pr_seq(dp);
        pr(max_element(dp.begin(), dp.end())[0]);

        a.clear();
    }
    return 0;
}