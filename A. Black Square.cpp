// link :-  https://codeforces.com/contest/431/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5]={}, cont=0;
    for (int i=1; i<5 ; i++) cin>>arr[i];
    string s;
    cin>>s;
    for (int i=0 ; i<s.size() ; i++) cont += arr[s[i]-'0'];
    cout << cont;

    return 0;
}
