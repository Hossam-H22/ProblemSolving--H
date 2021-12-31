// link :- https://codeforces.com/contest/136/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+2]={};
    for (int i=1 ; i<=n ; i++)
    {
        int x;
        cin>>x;
        arr[x]=i;
    }
    for (int i=1 ; i<=n ; i++) cout<<arr[i]<<" ";


    return 0;
}