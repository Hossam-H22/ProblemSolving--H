// link :-  https://codeforces.com/contest/59/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int up=0, low=0;
    cin>>s;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]>='A'&& s[i]<='Z') up++;
        if(s[i]>='a'&& s[i]<='z') low++;
    }
    if (up>low) transform(s.begin(),s.end(),s.begin(),::toupper); //convert string to uppercase
    else transform(s.begin(),s.end(),s.begin(),::tolower); //convert string to lowercase
    cout << s;

    return 0;
}
