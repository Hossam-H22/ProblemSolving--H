// link :- https://codeforces.com/contest/1552/problem/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i>=n ; i--)
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
        int n;
        cin>>n;
        int arr[n+5][5]={{}};
        fo1(0,n)
        {
            for(int k=0 ; k<5 ; k++)
                cin>>arr[i][k];
        }
        int win=0;
        fo1(1,n)
        {
            int c=0;
            for(int k=0 ; k<5 ; k++)
            {
                if (arr[i][k]<arr[win][k]) c++;
            }
            if (c>=3) win=i;
        }
        bool rightWin=1;
        fo1(0,n)
        {
            int c=0;
            for(int k=0 ; k<5 ; k++)
            {
                if (arr[i][k]<arr[win][k]) c++;
            }
            if (c>=3) rightWin=0;
        }

        if (rightWin) cout<<win+1<<endl;
        else cout<<-1<<endl;

    }

    return 0;
}