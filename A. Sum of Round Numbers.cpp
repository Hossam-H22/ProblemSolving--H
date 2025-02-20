// https://codeforces.com/contest/1352/problem/A
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
    int x = n;
    while(x!=0){
        if(x%10!=0) c++;
        x/=10;
    }
    cout<<c<<endl;
    c=0;
    while(n!=0){
        c++;
        if(n%10!=0) {
            cout << std::setw(c) << std::setfill('0') << std::left << n%10<< " ";
        }
        n/=10;
    }
    cout<<endl;
}


int main()
{
    io;
    int t=1;
    cin>>t;
    while(t--) solve();

    return 0;
}
