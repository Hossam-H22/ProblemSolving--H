// link :-  https://codeforces.com/contest/677/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,h,x;
    cin >> n>>h;
    int cnt=0;
    for (int i=0 ; i<n ; i++)
    {
        cin>>x;
        if (x<=h) cnt++;
        else cnt +=2;
    }
    cout << cnt;
    
    return 0;
}
