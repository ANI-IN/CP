#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;  



void solve(){
    int n;
    cin>>n;
    if(n%2==0)
    {
        cout<<n/2<<endl;
    }
    else
    {
        cout<<(-(n+1))/2<<endl;
    }
   
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