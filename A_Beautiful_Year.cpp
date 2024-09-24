#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <set>
using namespace std;
int MOD=1e9+7;  


bool hasDistinctDigits(int year) {
    string yearStr = to_string(year);
    set<char> digits(yearStr.begin(), yearStr.end());
    return digits.size() == yearStr.size();
}

int findNextDistinctYear(int y) {
    while (true) {
        y++;  // Increment the year
        if (hasDistinctDigits(y)) {
            return y;
        }
    }
}



int32_t main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

    int T = 1;

    while (T--)
    {
        int n;
        cin>>n;
        cout<<findNextDistinctYear(n)<<endl;

    }
    return 0;
}