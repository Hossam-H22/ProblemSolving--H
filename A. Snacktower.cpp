// link :- https://codeforces.com/contest/767/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100009];
    cin>>n;
    int z=n;
    for (int i=0; i<n; i++)
    {
        int num;
        cin>>num;
        arr[num]=1;
        while(arr[z]==1)
        {
            cout<<z<<" ";
            z--;
        }
        cout<<endl;
    }

    return 0;
}