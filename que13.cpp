#include <iostream>
#include <vector>
#include <algorithm>

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
        sort(a.begin(), a.end());

        if (a[0] == a[n - 1]) {
            cout << -1 << "\n";
            continue;
        }

        vector<int> b, c;
        int max_val = a[n - 1];
        
        for (int i = 0; i < n; i++) {
            if (a[i] == max_val) {
                c.push_back(a[i]);
            } else {
                b.push_back(a[i]);
            }
        }

        cout << b.size() << " " << c.size() << "\n";
        for (int x : b) cout << x << " ";
        cout << "\n";
        for (int x : c) cout << x << " ";
        cout << "\n";
    }

    return 0;
}