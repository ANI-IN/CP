#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int MOD=1e9+7;  


int origin(int n)
{
    if(n!=0 && n%9==0)
    return 9;
    else
    return n%9;
}

void solve(){
    long long n;
    cin>>n;

    long long cycle=n/9;
    long long sum=0;
    sum=cycle*45;

    long long rem=n%9;

    for(long long i=1;i<=rem;i++)
    {
        sum+=origin(i);
    }
    cout<<sum<<endl;

   
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