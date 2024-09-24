#include <bits/stdc++.h>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    string s;
    cin>>n>>s;

    int curr=0;
    int count=0;
    int maxi=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='.')
        {
            count++;
            curr++;
        }
        else if(s[i]=='#')
        {
            curr=0;
        }
        maxi=max(curr,maxi);
    }

    if(maxi>=3)
    cout<<2<<endl;
    else
    cout<<count<<endl;
   
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