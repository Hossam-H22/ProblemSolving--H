// link :-  https://codeforces.com/problemset/problem/932/B
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
#include <conio.h>
#define io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
ll sum = 1;
ll g(ll num)
{
    if (num < 10) return num;
    else
    {
        sum = 1;
        while (num != 0)
        {
            int digit = num % 10;
            if (digit != 0) sum *= digit;
            num /= 10;
        }
    }
    return g(sum);
}
int main()
{
    io;
    vector<int> vect[10];
    for (int i = 1; i <= 1000000; i++) vect[g(i)].push_back(i);
    ll q, l, r, k;
    cin >> q;
    while (q--)
    {
        cin >> l >> r >> k;
        ll c = 0;
        vector<int>::iterator start,end1;
		start = lower_bound(vect[k].begin(), vect[k].end(), l);
		end1 = lower_bound(vect[k].begin(), vect[k].end(), r);
		int high = start - vect[k].begin();
		int low = end1 - vect[k].begin();
		if (low == vect[k].size() || vect[k][low]>r) low--;
		cout << low-high+1 << endl;;
    }



    return 0;
}
