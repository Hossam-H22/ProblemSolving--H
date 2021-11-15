// link :- https://codeforces.com/group/Lq34voxr4E/contest/353760/problem/C
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int main()
{
    int n;
    cin >> n;
    char letter;
    int t = 0, e = 0, b = 0, c = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> letter;
        switch (letter)
        {
            case 't':
                t++;
                break;
            case 'e':
                e++;
                break;
            case 'b':
                b++;
                break;
            case 'c':
                c++;
                break;
        }
    }
    cout<<t<<" "<<e<<" "<<b<<" "<<c;

    return 0;
}