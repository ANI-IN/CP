#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
using namespace std;
int MOD=1e9+7;  


void solve(){
    string s;
    cin>>s;
    unordered_map<char,int>m;
    for(auto it : s)
    m[it]++;

    if(m.size()%2!=0)
    cout<<"IGNORE HIM!";
    else
    cout<<"CHAT WITH HER!";
   
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