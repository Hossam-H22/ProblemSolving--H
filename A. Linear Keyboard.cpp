// link :- https://codeforces.com/contest/1607/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string order, s;
        cin>>order;
        int arr[200]={};
        for (int i=0 ; i<order.length() ; i++) arr[order[i]]=i+1;
        cin>>s;
        int cont=0;
        for (int i=1 ; i<s.length() ; i++)
        {
            cont += abs(arr[s[i-1]]-arr[s[i]]);
        }
        cout<<cont<<endl;
    }

    return 0;
}