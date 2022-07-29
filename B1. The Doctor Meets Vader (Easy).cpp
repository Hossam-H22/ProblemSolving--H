// link :-  https://codeforces.com/problemset/problem/1184/B1
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
    int s, b;
    cin >> s >> b;
    vector <ll> spaceships;
    for (int i = 0; i<s ;i++)
    {
        ll num;
        cin >> num;
        spaceships.push_back(num);
    }

    vector <pair<ll,ll>> vect;
    for (int i=0 ; i<b ; i++)
    {
        ll d, g;
        cin >> d >> g;
        vect.push_back(make_pair(d, g));
    }
    sort (vect.begin() ,vect.end());

    ll comulative[b];
    for (int i=0 ; i<b ; i++)
    {
        if (i==0)
            comulative[i]= vect[i].second;
        else
            comulative[i] = comulative[i-1] + vect[i].second;
    }
    for (int i=0 ; i<s ; i++)
    {
        int start=0, end1=b-1, mid;
        ll gold = 0;
        while (start <= end1)
        {
            mid=(start+end1)/2;
            if (vect[mid].first <= spaceships[i])
            {
                gold = comulative[mid];
                start = mid+1;
            }
            else end1=mid-1;
        }
        cout << gold << " ";
    }



    return 0;
}
