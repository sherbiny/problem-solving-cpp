/// https://codeforces.com/contest/66/problem/B

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, x, t;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr.push_back(x);
    }
    int res = numeric_limits<int>::min();
    for (int i = 0; i < n; i++) {
        t = 1;
        int ii = i - 1;
        while(ii >= 0 && arr[ii] <= arr[ii + 1]){
            t++;
            ii--;
        }
        ii = i + 1;
        while(ii < n && arr[ii] <= arr[ii - 1]){
            t++;
            ii++;
        }
        res = max(res, t);
    }
    cout << res;
    return 0;
}