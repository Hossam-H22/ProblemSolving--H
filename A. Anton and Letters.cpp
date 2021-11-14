// link :- https://codeforces.com/contest/443/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int cont=0;
    int arr[200]={};
    for (int i=0 ; i<s.size() ; i++)
    {
        if (s[i]>='a' && s[i]<='z')
        {
            arr[s[i]]++;
            if (arr[s[i]]==1) cont++;
        }
    }
    cout << cont;


    return 0;
}