// link :- https://codeforces.com/contest/365/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cont=0;
    cin >>n>>k;
    string s;
    for (int i=0 ; i<n ; i++)
    {
        cin >>s;
        int arr[10]={};
        bool flag=true;
        for (int j=0 ; j<s.length() ; j++) arr[s[j]-'0']+=1;
        for (int i=0 ; i<=k ; i++) if(arr[i]==0) flag=false;
        if (flag) cont++;
    }
    cout << cont;


    return 0;
}
