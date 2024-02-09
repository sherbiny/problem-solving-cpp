/// https://codeforces.com/contest/218/problem/A

#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k, x, c = 0;
    cin >> n >> k;
    int p = (2 * n) + 1;
    int s = p + 2;
    vector<int> arr(s);
    for (int i = 1; i <= p; i++) {
        cin >> x;
        arr[i] = x;
    }
    for (int i = 1; i <= p; i++) {
        if (i % 2 == 0) {
            if ((arr[i] - 1 > arr[i - 1]) && (arr[i] - 1 > arr[i + 1])) {
                arr[i]--;
                c++;
                if (c == k) break;
            }
        }
    }
    for (int i = 1; i <= p; i++) {
            cout << arr[i] << " ";
    }
    return 0;
}