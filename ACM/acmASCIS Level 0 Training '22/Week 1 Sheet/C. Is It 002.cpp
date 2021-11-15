// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/C
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int N, M, d;
    char S, x;
    cin >> N >> S >> M >> x >> d;
    switch (S)
    {
    case '+':
    {
        if (N+M==d)
            cout << "Yes";
        else
            cout << N+M;
        break;
    }
    case '-':
    {
        if (N-M==d)
            cout << "Yes";
        else
            cout << N-M;
        break;
    }
    case '*':
    {
        if (N*M==d)
            cout << "Yes";
        else
            cout << N*M;
    }
    }




    return 0;
}