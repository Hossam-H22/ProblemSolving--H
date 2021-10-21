// link :-  https://codeforces.com/contest/236/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int arr[200]={};
    cin>>s;
    int siz = s.size();
    for(int i=0 ; i<s.size() ; i++)
    {
        arr[s[i]]++;
        if(arr[s[i]]>1) siz--;
    }
    if (siz%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";

    return 0;
}
