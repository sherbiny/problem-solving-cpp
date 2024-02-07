/// http://codeforces.com/contest/381/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, x, s = 0, d = 0;
    vector<int> arr;
    cin >> n;
    while(n--) {
        cin >> x;
        arr.push_back(x);
    }
    bool flag = 1;
    int i = 0, j = arr.size() - 1, m;
    while (i <= j) {
        m = max(arr[i], arr[j]);
        if (flag) s += m;
        else d += m;
        if (arr[i] == m) i++;
        else j--;
        flag = !flag;
    }
    cout << s << " " << d;
    return 0;
}