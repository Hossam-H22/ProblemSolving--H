// link :- https://codeforces.com/contest/378/problem/A
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, awin=0, draw=0;
    cin>>a>>b;
    for (int i=1 ; i<=6 ; i++)
    {
        if (abs(i-a)< abs(i-b)) awin++;
        else if (abs(i-a) == abs(i-b)) draw++;
    }
    cout<<awin<<" "<<draw<<" "<<6-awin-draw<<endl;

    return 0;
}






//------------------------------------------------------------
//                       Another solution
//------------------------------------------------------------






// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, awin, bwin, draw;
    cin>>a>>b;
    if ((a+b)%2==0)
    {
        draw=1;
        if (a<b)
        {
            awin=((a+b)/2)-1;
            bwin=5-awin;
        }
        else
        {
            bwin=((a+b)/2)-1;
            awin=5-bwin;
        }
    }
    else
    {
        draw=0;
        if (a<b)
        {
            awin=((a+b)/2);
            bwin=6-awin;
        }
        else
        {
            bwin=((a+b)/2);
            awin=6-bwin;
        }
    }
    if (a==b)
    {
        awin=0;
        bwin=0;
        draw=6;
    }
    cout<<awin<<" "<<draw<<" "<<bwin<<endl;



    return 0;
}