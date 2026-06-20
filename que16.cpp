#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_ops = INT_MAX;
        bool already_unsorted = false;

        for (int i = 0; i < n - 1; i++) {
            if (a[i] > a[i + 1]) {
              already_unsorted = true;
               break;
            }
            int diff = a[i + 1] - a[i];
            int ops = (diff / 2) + 1;
            min_ops = min(min_ops, ops);
        }
        if (already_unsorted) {
            cout << 0 << "\n";
        } else {
            cout << min_ops << "\n";
        }
    }
    return 0;
}