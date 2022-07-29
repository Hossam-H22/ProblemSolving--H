// link :-  https://codeforces.com/contest/231/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// ------------------------------- 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cont=0;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if (a+b+c>=2) cont++;
    }
    cout << cont;

    return 0;
}
