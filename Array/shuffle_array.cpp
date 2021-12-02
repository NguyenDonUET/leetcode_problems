#include <bits/stdc++.h>
using namespace std;
/*
Cho mảng nums có 2n phần tử có dạng [x1,x2,...,xn,y1,y2,...,yn].
Trả về 1 mảng mới có dạng [x1,y1,x2,y2,...,xn,yn]
Input: nums = [2,5,1,3,4,7], n = 3
Output: [2,3,5,4,1,7] 
*/
vector<int> shuffle(vector<int> &nums, int n)
{
    vector<int> result(n * 2);
    for (int i = 0; i < n; ++i)
    {
        result[2 * i] = nums[i];
        result[2 * i + 1] = nums[i + n];
    }
    return result;
}
int main()
{

    return 0;
}