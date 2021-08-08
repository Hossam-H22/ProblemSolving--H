// link :-  https://codeforces.com/problemset/problem/713/A
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
    int arr[300010];
	for (int i=0 ; i<n ; i++)
    {
		char c;
		string s;
		cin >> c >> s;
		ll res = 0 ,j = 1;
        for (int i=s.length()-1 ; i>=0 ; i--)
        {
            if (s[i]%2 == 1) res += j;
            j*=2;
        }
		if (c == '?') cout << arr[res] << endl;
		else if (c == '+') arr[res]++;
		else if (c == '-') arr[res]--;
	}



    return 0;
}