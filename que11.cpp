#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

    int n;
    cin >> n;
    int min_ops = 1e9; 

    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        min_ops = min(min_ops, abs(a));
    }

    cout << min_ops << "\n";
    return 0;
}