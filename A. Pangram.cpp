// link :- https://codeforces.com/contest/520/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[200]={};
    cin >> n;
    for (int i=0 ; i<n ; i++)
    {
        char ch;
        cin >> ch;
        if (ch>='A' && ch <='Z') ch+=32;
        arr[ch]++;
    }
    for (int i=97 ; i<=122 ; i++)
    {
        if (arr[i]==0)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";


    return 0;
}