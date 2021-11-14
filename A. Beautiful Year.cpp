// link :- https://codeforces.com/contest/271/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    cin>>n;
    while (true)
    {
        n++;
        int year=n;
        bool check[10]={}, done=true;;
        while (year)
        {
            if (check[(year%10)])
            {
                done=false;
                break;
            }
            check[(year%10)]=true;
            year/=10;
        }
        if (done) break;
    }
    cout<<n;

    return 0;
}




------------------------------------------------------------------------------
                               Another Solution
------------------------------------------------------------------------------




// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    int n;
    cin>>n;
    while (true)
    {
        n++;
        int year=n, arr[4];
        for (int i=0 ; i<4 ; i++)
        {
            arr[i]=year%10;
            year/=10;
        }
        if (arr[0]!=arr[1]&&arr[0]!=arr[2]&&arr[0]!=arr[3]&&arr[1]!=arr[2]&&arr[1]!=arr[3]&&arr[2]!=arr[3])
            break;
    }
    cout<<n;
    return 0;
}