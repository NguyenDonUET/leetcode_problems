#include <iostream>
using namespace std;
/*
+ nếu len là số chẵn -> có len / 2 số lẻ
vd: 3 4 5 6 -> 2 số lẻ
+ nếu len là số chẵn:
1.low là số lẻ : sẽ có (len/2) + 1 = (len + 2) / 2 số lẻ
vd: 2 3 4 -> 1 số lẻ
2.low là số chẵn : sẽ có len / 2 số lẻ
vd: 8 9 10 -> 1 số lẻ
*/
int countOdds(int low, int high)
{
    int len = high - low + 1;
    if (len % 2 == 0)
        return len / 2;
    if (low % 2 != 0)
    {
        return (len + 2) / 2;
    }
    return len / 2;
}
int main()
{
}