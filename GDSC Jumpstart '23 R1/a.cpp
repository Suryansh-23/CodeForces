#include <iostream>
#include <vector>
using namespace std;

void ans() {
    int n;
    int cx;
    cin >> n >> cx;
    int x[n];
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    int fr[n + 1] = {0};
    int c = 0;
    int max;
    for (int i = 0; i < n - 1; i++) {
        if (x[i + 1] == x[i]) {
            ++c;
        } else {
            fr[c]++;
        }
    }
    if (fr[0] != 0)
        fr[0]++;
    max = fr[0];
    for (int i = 1; i <= c; i++) {
        if (fr[i] != 0)
            fr[i]++;
        if (fr[i] > max) {
            max = fr[i];
        }
    }

    if (n == 1)
        cout << 1;
    else
        cout << max;
}

int main() {
    ans();
}
