#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;

    if(n & 1)
    {
        for(int i=0;i<n/2;i++)
        {
            cout<<n-i<<" "<<i+1<<" ";
        }
        cout<<(n+1)/2;
        cout<<endl;
        return;
    }
    else
    {
        cout<<-1;
        cout<<endl;
        return;
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