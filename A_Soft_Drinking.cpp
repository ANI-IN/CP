#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int total_drink=l*k;
    int lime_slices=c*d;

    int no_of_toast=k*l/nl;
    int salt=p/np;

    int ans=min(lime_slices,min(no_of_toast,salt));
    ans=ans/n;
    cout<<ans;

   
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