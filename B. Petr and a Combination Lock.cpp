// link :- https://codeforces.com/problemset/problem/1097/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#include <iostream>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i>=n ; i--)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;



bool solve(int idx, int n, int a[], int value){
    if(idx >= n) return (value==0&& idx==n)? true : false;
    return solve(idx+1, n, a, (value-a[idx])%360) || solve(idx+1, n, a, (value+a[idx])%360);
}


int main()
{
    io;
    int n;
    cin>>n;
    int arr[n];
    fo1(0, n) cin>>arr[i];
    solve(0, n, arr, 0)? cout<<"YES": cout<<"NO";
    return 0;
}