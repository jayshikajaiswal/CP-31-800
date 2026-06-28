#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        int count1 = 0;
        int count_neg1 = 0;
        
        for (int i = 0; i < n; ++i) {
            int val;
            cin >> val;
            if (val == 1) {
                count1++;
            } else {
                count_neg1++;
            }
        }
        
        int operations = 0;
        
        while (count_neg1 > count1) {
            count_neg1--;
            count1++;
            operations++;
        }
        
        if (count_neg1 % 2 != 0) {
            operations++;
        }
        
        cout << operations << "\n";
    }
    
    return 0;
}