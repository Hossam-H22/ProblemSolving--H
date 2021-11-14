// link :-  https://codeforces.com/problemset/problem/791/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// ------------------------------- 
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, cont=0;
    cin>>a>>b;
    while (a<=b)
    {
        a*=3;
        b*=2;
        cont++;
    }
    cout << cont;


    return 0;
}
