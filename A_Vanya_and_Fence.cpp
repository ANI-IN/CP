#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n,h;
    cin>>n>>h;
    int ans=n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        if(x>h)
        ans++;
    }
    cout<<ans<<endl;
   
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