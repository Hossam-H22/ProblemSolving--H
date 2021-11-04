// link :- https://codeforces.com/contest/5/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string name;
    int cont=0, num=0;
    while (getline(cin,name))
    {
        if (name[0]=='+') num++;
        else if (name[0]=='-') num--;
        else
        {
            int indx =name.find(":");
            cont+=((name.length()-indx-1)*num);
        }
    }
    cout<<cont;

    return 0;
}