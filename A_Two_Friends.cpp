#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n+1);
    int index=1;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        arr[index++]=y;
    }
    int ans=3;

    for(int i=1;i<=n;i++)
    {
        if((arr[arr[i]])==i)
        ans=2;
    }

    cout<<ans<<endl;
   
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