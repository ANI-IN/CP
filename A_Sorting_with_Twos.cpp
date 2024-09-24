#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is a power of 2
bool is_power_of_two(int x) {
    return (x & (x - 1)) == 0 && x > 0;
}

void solve() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        // Read the array
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        // Calculate the difference array b
        vector<int> b(n-1);
        for (int i = 0; i < n-1; ++i) {
            b[i] = a[i+1] - a[i];
        }
        
        // Check if any non-power-of-2 index in b has a negative value
        bool possible = true;
        for (int i = 0; i < n-1; ++i) {
            if (b[i] < 0 && !is_power_of_two(i + 1)) {
                possible = false;
                break;
            }
        }
        
        // Output the result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Call the solve function to process the input and output
    solve();
    
    return 0;
}
