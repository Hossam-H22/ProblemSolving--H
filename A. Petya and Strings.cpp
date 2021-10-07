// link :-  https://codeforces.com/contest/112/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    
    // transform string to uppercase 
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);  
    transform(s2.begin(),s2.end(),s2.begin(),::toupper);
    
    for(int i=0 ; s1.size() ; i++)
    {
        if(s1[i] > s2[i])
        {
            cout << 1;
            return 0;
        }
        else if(s1[i] < s2[i])
        {
            cout << -1;
            return 0;
        }
    }
    cout <<0;

    return 0;
}
