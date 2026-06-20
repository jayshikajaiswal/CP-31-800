#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  
    int t;
    if (cin >> t) {
        while (t--) {
        int total_points = 0;
            
        for (int r = 0; r < 10; ++r) {
        string row_str;
         cin >> row_str;
                
        for (int c = 0; c < 10; ++c) {
          if (row_str[c] == 'X') {

         int points = min({r, 9 - r, c, 9 - c}) + 1;
            total_points += points;
                   }
               }
           }
        cout << total_points << "\n";
        }
    }
    return 0;
}