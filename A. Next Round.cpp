// link :- https://codeforces.com/contest/158/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, k, cont=0, x;
    cin>>n>>k;
    int arr[n+5]={};
    for (int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }
    int limit=arr[k-1];
    for (int i=0 ; i<n ; i++)
    {
        if (arr[i]>=limit && arr[i]!=0) cont++;
    }
    cout << cont;


    return 0;
}