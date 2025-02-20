// https://codeforces.com/problemset/problem/160/A
/*
██████  ██████   █████   ██████   ██████  ███    ██         ██   ██ ██████  ██████
██   ██ ██   ██ ██   ██ ██       ██    ██ ████   ██         ██   ██      ██      ██
██   ██ ██████  ███████ ██   ███ ██    ██ ██ ██  ██         ███████  █████   █████
██   ██ ██   ██ ██   ██ ██    ██ ██    ██ ██  ██ ██         ██   ██ ██      ██
██████  ██   ██ ██   ██  ██████   ██████  ██   ████ ███████ ██   ██ ███████ ███████
 */
#include <bits/stdc++.h>
#include <iostream>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;


void solve(){
    int n, sum=0, taken=0, c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr, arr+n);
    for(int i=n-1; i>=0; i--) {
        taken+=arr[i];
        if(taken> sum-taken) {
            cout<<n-i;
            break;
        }
    }
}


int main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--) solve();

    return 0;
}
