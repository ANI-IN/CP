#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
        int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int score = arr[k-1];  
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0 && arr[i] >= score) {
            ans++;
        }
    }
    
    cout << ans << endl;
   
}


int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;
 
    while (T--)
    {
        solve();
    }
    return 0;
}