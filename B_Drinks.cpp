#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    float sum=0.0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        sum+=x;
    }

    cout<<sum/n;
    
   
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