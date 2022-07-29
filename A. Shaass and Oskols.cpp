// link :- https://codeforces.com/contest/294/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, arr[105];
    cin>>n;
    for(int i=1 ; i<=n ; i++) cin>>arr[i];
    int m;
    cin>>m;
    for(int i=1 ; i<=m ; i++)
    {
        int x, y;
        cin>>x>>y;
        arr[x-1]+=y-1;
        arr[x+1]+=arr[x]-y;
        arr[x]=0;
    }

    for(int i=1 ; i<=n ; i++) cout<<arr[i]<<endl;

    return 0;
}
