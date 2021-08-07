// link :-  https://codeforces.com/problemset/problem/45/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;

int main()
{
    io;
    string s;
    cin >> s;
    int num = 0;
    if (s=="January") num=1;
    else if (s=="February") num=2;
    else if (s=="March") num=3;
    else if (s=="April") num=4;
    else if (s=="May") num=5;
    else if (s=="June") num=6;
    else if (s=="July") num=7;
    else if (s=="August") num=8;
    else if (s=="September") num=9;
    else if (s=="October") num=10;
    else if (s=="November") num=11;
    else if (s=="December") num=12;
    int n;
    cin >> n;
    int x = (n%12)+num;
    if (x>12) x-=12;
    switch (x)
    {
        case 1:
            cout <<"January";
            break;
        case 2:
            cout << "February";
            break;
        case 3:
            cout <<"March";
            break;
        case 4:
            cout <<"April";
            break;
        case 5:
            cout << "May";
            break;
        case 6:
            cout <<"June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
            cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
    }


    return 0;
}
