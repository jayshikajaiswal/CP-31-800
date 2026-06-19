#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int empty_cells = 0;
        int consecutive_dots = 0;
        bool found_three = false;

        for (char c : s) {
            if (c == '.') {
                empty_cells++;
                consecutive_dots++;
                if (consecutive_dots == 3) {
                    found_three = true;
                }
            } else {
                consecutive_dots = 0; 
            }
        }

        if (found_three) {
            cout << 2 << "\n";
        } else {
            cout << empty_cells << "\n";
        }
    }
    return 0;
}