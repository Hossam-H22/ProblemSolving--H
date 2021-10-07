// link :-  https://codeforces.com/contest/405/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n+5]={};
    for (int i=0 ; i<n ; i++) cin >> arr[i];
    sort(arr, arr+n);
    for (int i=0 ; i<n ; i++) cout << arr[i] << " ";

    return 0;
}