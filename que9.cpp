#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int sum_efficiencies = 0;
    for (int i = 0; i < n - 1; ++i) {
        int efficiency;
        cin >> efficiency;
        sum_efficiencies += efficiency;
    }
    cout << -sum_efficiencies << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}