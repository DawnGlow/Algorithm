#include <bits/stdc++.h>
using namespace std;

int d[1001];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    d[1] = 1; d[2] = 3;
    for (int i = 3; i <= n; i++) {
        d[i] = (d[i - 1] + 2 * d[i - 2]) % 10007;
    }
    cout << d[n];
}