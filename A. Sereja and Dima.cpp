// link :-  https://codeforces.com/contest/381/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int N, Scount = 0, Dcount = 0, arr[1009] = {};
    cin >> N;
    for (int i = 1; i <= N; i++) cin >> arr[i];
    int ii=1 , j=N;
    for (int i = 1; i <= N; i++)
    {
        if (i%2 != 0)
        {
            if (arr[ii] > arr[j])
            {
                Scount += arr[ii];
                ii++;
            }
            else
            {
                Scount += arr[j];
                j--;
            }
 
        }
        else if (i%2 == 0)
        {
            if (arr[ii] > arr[j])
            {
                Dcount += arr[ii];
                ii++;
            }
            else
            {
                Dcount += arr[j];
                j--;
            }
        }
    }
    cout << Scount << " " << Dcount;
    
    return 0;
}




//-------------------------------------------------------------------
//                      Another solution
//-------------------------------------------------------------------



// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define inf 0x3f3f3f3f3f3f3f3f
#define file freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define fo1(s, n) for(int i=s ; i<n ; i++)
#define fo2(s, n) for(int i=s ; i<=n ; i++)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

int main()
{
    io;
    int n, x=0, l, first=0, second=0;
    cin>>n;
    int arr[n];
    fo1(0, n) cin>>arr[i];
    l=n-1;
    while(l!=x-1 && x!= l+1)
    {
        if (arr[x]>arr[l]) first+=arr[x++];
        else first+=arr[l--];
        if (l==x-1 || x== l+1) break;
        if (arr[x]>arr[l]) second+=arr[x++];
        else second+=arr[l--];
    }
    cout << first << " " << second;

    return 0;
}
