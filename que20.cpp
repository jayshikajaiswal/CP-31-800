#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
       vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; ++i) {
            cout << (n + 1 - a[i]);
            
            if (i != n - 1) {
                std::cout << " ";
            }
        }
            cout << "\n";
    }
    return 0;
}