#include <bits/stdc++.h>
using namespace std;

int arr[41];
int n, cnt1 = 0, cnt2 = 0;

int fib(int N) {
    if (N == 1 || N == 2) {
        cnt1++;
        return 1;
    } else
        return (fib(N - 1) + fib(N - 2));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    cin >> n;

    fib(n);

    arr[1] = arr[2] = 1;
    for (int i = 3; i <= n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        cnt2++;
    }
    cout << cnt1 << " " << cnt2;
}