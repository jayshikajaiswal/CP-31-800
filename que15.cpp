#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    
    int total_sum = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        total_sum += a;
    }
    if(total_sum % 2 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
 return 0;
}