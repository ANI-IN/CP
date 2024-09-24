#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
        cin >> n;
        

       if (n % 2 == 1) {
            cout << "NO" << '\n';
        } else {
            cout << "YES" << '\n';
            for (int i = 0; i < n / 2; ++i) {
                if (i % 2 == 0) {
                    cout << "AA";
                } else {
                    cout << "BB";
                }
            }
            cout << '\n';
        }
   
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