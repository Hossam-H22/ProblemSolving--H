// link :- https://codeforces.com/contest/492/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    ll l, arr[n+5];
    cin>>l;
    for (int i=0 ; i<n ; ++i) cin>>arr[i];
    sort(arr, arr+n);
    ll len= 2*max(arr[0], l-arr[n-1]);
    for (int i=1 ; i<n ; ++i)
    {
        len=max(len, abs(arr[i]-arr[i-1]));
    }
    cout<<fixed<<setprecision(9)<<(len/2.0);

    return 0;
}