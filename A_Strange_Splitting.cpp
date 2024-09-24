#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(arr[0]==arr[n-1])
    {
        cout<<"NO"<<endl;
       
    }
    else
    {
        cout<<"YES"<<endl;

        string s(n,'R');
        s[1]='B';
        cout<<s<<endl;
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