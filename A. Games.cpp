// https://codeforces.com/contest/268/problem/A
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
    int n, c=0;
    cin>>n;
    int home[n], guest[n];
    for(int i=0; i<n; i++) cin>>home[i]>>guest[i];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) continue;
            if(home[i]==guest[j]) c++;
        }
    }
    cout<<c;
}


int main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--) solve();

    return 0;
}
