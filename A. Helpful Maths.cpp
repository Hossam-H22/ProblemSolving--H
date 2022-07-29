// link :- https://codeforces.com/contest/339/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int arr[105]={};
    int cont=0;
    for (int i=0 ; i<s.size() ; i++)
    {
        if (s[i]!='+')
        {
            arr[cont]= (s[i]-'0');
            cont++;
        }
    }
    sort(arr, arr+cont);
    cout << arr[0];
    for (int i=1 ; i<cont ; i++) cout << "+" << arr[i];


    return 0;
}
