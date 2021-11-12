// link :- https://codeforces.com/group/Lq34voxr4E/contest/350978/problem/H
// -------------------------------
// |    -->  Dragon_H22  <--     |
// -------------------------------
#include <iostream>
using namespace std;

int main()
{
    char letter;
    int x, y, up, down, right, left, i, counter = 0;
    cin >> letter >> y;
    char letters[8] = {'a','b','c','d','e','f','g','h'};
    for (i = 0; i < 8; i++)
    {
        if (letters[i] == letter)
        {
            x = i +1;
        }
    }


    for (i = 1; i <= 8; i++)
    {
        up = y + i;
        down = y - i;
        right = x + i;
        left = x - i;

        if (up < 9 && right < 9)
            counter++;
        if (down > 0 && left >0)
            counter++;
        if (up < 9 && left > 0)
            counter++;
        if (down > 0 && right < 9)
            counter++;
    }
    cout << counter;



    return 0;
}