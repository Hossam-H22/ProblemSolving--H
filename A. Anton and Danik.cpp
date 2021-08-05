// link :-  https://codeforces.com/contest/734/problem/A

//     -->  Dragon_H22  <--
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    int n, a=0, d=0;
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        char ch;
        cin >> ch;
        ch=='A'? a++ : d++;
    }
    a>d ? cout<<"Anton" : (a==d ? cout<<"Friendship" : cout<<"Danik") ;

    return 0;
}