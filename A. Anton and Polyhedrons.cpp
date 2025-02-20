// https://codeforces.com/contest/785/problem/A
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
    string shape;
    for(int i=0; i<n; i++){
        cin>>shape;
        if(shape=="Tetrahedron") c+=4;
        else if(shape=="Cube") c+=6;
        else if(shape=="Octahedron") c+=8;
        else if(shape=="Dodecahedron") c+=12;
        else if(shape=="Icosahedron") c+=20;
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
