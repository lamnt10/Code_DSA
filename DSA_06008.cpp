#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

// Hàm đếm số lượng y thỏa mãn x^y > y^x
long long countPairs(int x, int y[], int m, int a[]) {
    if (x == 0) return 0;
    if (x == 1) return a[0];

    // Tìm các phần tử y > x
    int* it = upper_bound(y, y + m, x);
    long long ans = (y + m) - it;

    // x > 1 luôn thắng y = 0 và y = 1
    ans += (a[0] + a[1]);

    // Các trường hợp đặc biệt
    if (x == 2) ans -= (a[3] + a[4]);
    if (x == 3) ans += a[2];

    return ans;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int x[n], y[m], a[5] = {};
        for (int i = 0; i < n; i++) cin >> x[i];
        for (int i = 0; i < m; i++) {
            cin >> y[i];
            if (y[i] < 5) a[y[i]]++; // Đếm các số nhỏ trong mảng Y
        }
        
        sort(y, y + m); // Sắp xếp mảng Y để dùng upper_bound

        long long total = 0; // Dùng long long để tránh tràn số
        for (int i = 0; i < n; i++) {
            total += countPairs(x[i], y, m, a);
        }
        cout << total << endl;
    }
    return 0;
}