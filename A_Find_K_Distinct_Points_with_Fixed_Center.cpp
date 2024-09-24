#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int xc, yc, k;
        cin >> xc >> yc >> k;

        for (int i = 1; i <= k/2; ++i) {
            cout << xc - i << " " << yc << endl;
            cout << xc + i << " " << yc << endl;
        }

        if (k % 2 != 0) {
            // If k is odd, we need one more point, which is the center itself
            cout << xc << " " << yc << endl;
        }
   return;
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}