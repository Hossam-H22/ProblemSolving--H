// link :-  https://codeforces.com/contest/1560/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int arr[1000+9]={};
void like()
{
    int num=1, i=0;
    while (i<1005)
    {
        if (num%3!=0 && num%10!=3)
        {
            arr[i] = num;
            i++;
        }
        num++;
    }
}
int main()
{
    io;
    like();
    int t,i;
    cin >> t;
    while (t--)
    {
        cin >> i;
        cout << arr[i-1] << endl;
    }


    return 0;
}