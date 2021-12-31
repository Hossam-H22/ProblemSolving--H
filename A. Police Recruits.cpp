// link :-  https://codeforces.com/contest/427/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cont=0, x, free=0;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        cin >> x;
        if (x>0) free+=x;
        if (x==-1)
        {
            if (free>0) free--;
            else cont++;
        }
    }
    cout << cont;


    return 0;
}
