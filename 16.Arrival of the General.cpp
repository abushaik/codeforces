#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int max_height = a[0], min_height = a[n-1], max_pos = 0, min_pos = n-1, ans = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] > max_height) {
            max_height = a[i];
            max_pos = i;
        }
        if(a[i] <= min_height) {
            min_height = a[i];
            min_pos = i;
        }
    }
    ans = max_pos + (n - 1 - min_pos);
    if(max_pos > min_pos) ans--;
    cout << ans << endl;
    return 0;
}

