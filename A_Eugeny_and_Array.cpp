#include <iostream>
#include <vector>
#include <unordered_map>
#include<map>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    int t = 1; //cin >> t;
    while (t--) {
        int n, m; cin >> n >> m;
        int cnt_neg = 0, cnt_pos = 0;
        for (int i = 0; i < n; i++)
        {
            int x; cin >> x;
            if (x == -1) cnt_neg++;
            else cnt_pos++;
        }
        while (m--) {
            int l, r; cin >> l >> r;
            if ((r - l) % 2 && cnt_neg >= (r - l + 1) / 2 && cnt_pos >= (r - l + 1) / 2)
                cout << "1\n";
            else cout << "0\n";
        }
    }

    return 0;
}