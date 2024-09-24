#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  

bool lucky(int n)
{
    if(n==4 || n==7)
    return true;
    else
    return false;
}

int solve(int n)
{
    int c=0;
    while(n)
    {
        int rem=n%10;
        if(lucky(rem))
        c++;
        n=n/10;
    }
    return c;
}

void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    int c=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        c=solve(arr[i]);
        if(c<=k)
        ans++;
    }
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