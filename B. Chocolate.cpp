// link :-  https://codeforces.com/problemset/problem/617/B
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

int main()
{
    io;
    int n;
    cin>>n;
    int arr[n];
    vector<int> vect;
    for(int i=0; i<n; i++) 
    {
      cin >> arr[i];
      if(arr[i] ==1)
      {
         vect.push_back(i);
      }
    }
    if(vect.size()==0)  cout<<"0"<<endl;
    else
    {
      ll times=1;
        for(int i=1; i<vect.size(); i++)
        {
            times*= (vect[i]-vect[i-1]);
        }
        cout<<times;
     }

    return 0;
}