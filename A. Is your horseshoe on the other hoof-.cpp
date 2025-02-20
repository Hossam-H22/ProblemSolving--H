// https://codeforces.com/contest/228/problem/A
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
    set<int> s;
    int x;
    for(int i=0; i<4; i++){
        cin>>x;
        s.insert(x);
    }
    cout<<4-s.size();

}


int main()
{
    io;
    int t=1;
//    cin>>t;
    while(t--) solve();

    return 0;
}
