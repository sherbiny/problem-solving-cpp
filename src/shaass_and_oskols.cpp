#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    cin >> m;
    int x, y;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        if (x - 1 >= 1) {
            arr[x - 1] += y - 1;
        }
        if (x + 1 <= n) {
            arr[x + 1] += arr[x] - y;
        }
        arr[x] = 0;
    }
    for (int i = 1; i < n; i++) {
        cout << arr[i] << endl;
    }
    cout << arr[arr.size() - 1];
    return 0;
}