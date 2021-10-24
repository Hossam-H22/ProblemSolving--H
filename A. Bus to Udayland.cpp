// link :- https://codeforces.com/contest/711/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s[n];
    int first=-1, second=-1;
    for (int i=0 ; i<n ; i++)
    {
        cin >> s[i];
        if (s[i][0]=='O' && s[i][1]=='O')
        {
            first=i;
            second=0;
        }
        else if (s[i][3]=='O' && s[i][4]=='O')
        {
            first=i;
            second=3;
        }
    }
    if (first != -1)
    {
        cout << "YES\n";
        for (int i=0 ; i<n ; i++)
        {
            if (first == i)
            {
                s[first][second]='+';
                s[first][second+1]='+';
            }
            cout << s[i] << endl;
        }
    }
    else cout << "NO";
    return 0;
}