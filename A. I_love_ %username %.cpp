// https://codeforces.com/contest/155/problem/A
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
    int n, mini=3000, maxi=-1, c=0;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(i==0){
            maxi=arr[i];
            mini=arr[i];
            continue;
        }
        if(arr[i]>maxi) {
            maxi=arr[i];
            c++;
        }
        else if(arr[i]<mini) {
            mini=arr[i];
            c++;
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
