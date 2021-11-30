// link :- https://codeforces.com/contest/1538/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    int t;
    cin>>t;
    while (t--)
    {
        ll n, sum=0, cont=0;
        cin>>n;
        int arr[n+5]={};
        fo1 (0,n)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        if (sum%n!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        sum/=n;
        fo1(0,n)
        {
            if (sum<arr[i]) cont++;
        }
        cout<<cont<<endl;
    }



    return 0;
}