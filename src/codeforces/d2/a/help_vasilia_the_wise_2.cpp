///// https://codeforces.com/contest/143/problem/A

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int r1, r2, c1, c2, d1, d2;
    int g1, g2, g3, g4;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;
    g1 = min(10, min(r1, min(c1, d1)));
    g2 = min(10, min(r1, min(c2, d2)));
    g3 = min(10, min(r2, min(c1, d2)));
    g4 = min(10, min(r2, min(c2, d1)));
    for (int i = 1; i < g1; i++) {
        for (int j = 1; j < g2; j++) {
            if (i == j) continue;
            for (int k = 1; k < g3; k++) {
                if (k == j || k == i) continue;
                for (int l = 1; l < g4; l++) {
                    if (l == k || l == j || l == i) continue;
                    if (i + k == c1 && i + j == r1 && i + l == d1 &&
                        k + l == r2 && k + j == d2 && j + l == c2) {
                        cout << i << " " << j << "\n" << k << " " << l;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1;
    return 0;
}