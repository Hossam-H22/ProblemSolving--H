// link :-  https://codeforces.com/contest/734/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a=0, d=0;
    cin>>n;
    for (int i=0 ; i<n ; i++)
    {
        char ch;
        cin >> ch;
        if (ch=='A') a++;
        else d++;
    }
    if (a>d) cout<<"Anton";
    else if (a==d) cout<<"Friendship";
    else cout<<"Danik";


    return 0;
}
