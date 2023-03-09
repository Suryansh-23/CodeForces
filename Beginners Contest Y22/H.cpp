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

bool traverse(int src, int dest, unordered_set<pii> s, unordered_map<int, vei> &gr) {
    bool b = false;
    for (auto i : gr[src]) {
        if (i == dest) {
            return true;
        }
        if (s.find(pii(src, i)) == s.end()) {
            s.insert(pii(src, i));
            b = b || traverse(i, dest, s, gr);
        }
    }

    return b;
}

int main(void) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x, y, a, b;
    unordered_map<int, vei> gr;
    unordered_set<pii> s;
    tc {
        n = 0;
        inp(x) inp(y);
        lp(y) {
            inp(a) inp(b);
            gr[a].push_back(b);
            gr[b].push_back(a);
        }

        for (auto i : gr) {
            if (traverse(i.first, x, s, gr)) {
                pr("YES");
                break;
            }
            s.clear();
        }

        gr.clear();
        s.clear();
    }
    return 0;
}