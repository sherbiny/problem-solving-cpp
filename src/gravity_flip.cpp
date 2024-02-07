/// http://codeforces.com/contest/405/problem/A

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;
    int x;
    while(n--) {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size() - 1; i++) cout << arr[i] << " ";
    cout << arr[arr.size() - 1];
    return 0;
}