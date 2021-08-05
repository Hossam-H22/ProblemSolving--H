// link :-  https://codeforces.com/contest/59/problem/A

//     -->  Dragon_H22  <--
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i<=n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    string s1;
    int up=0, low=0;
    cin>>s1;
    fo1(0, s1.size())
    {
        if(s1[i]>='A'&& s1[i]<='Z') up++;
        if(s1[i]>='a'&& s1[i]<='z') low++;
    }
    if (up>low) transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    else transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout << s1;

    return 0;
}