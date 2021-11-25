#include <bits/stdc++.h>
using namespace std;
/*
Kiểm tra xem có thể sx lại mảng để mảng trở thành arithmetic progression hay ko ?
Là arithmetic progression nếu khoảng cách giữa 2 pt liên tiếp trong array = nhau.
*/
bool canMakeArithmeticProgression(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    if (arr.size() == 2)
        return true;
    int distance = arr[1] - arr[0];
    for (int i = 2; i < arr.size(); ++i)
    {
        if (distance != arr[i] - arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
}