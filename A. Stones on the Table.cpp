// link :-  https://codeforces.com/contest/266/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cont=0;
    char last;
    string s;
    cin>>n>>s;
    last = s[0];
    for (int i=1 ; i<n ; i++) 
    {
        if (last==s[i]) cont++;
        else last=s[i];
    }
    cout << cont;


    return 0;
}
