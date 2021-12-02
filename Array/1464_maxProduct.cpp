#include <bits/stdc++.h>
using namespace std;
/*
Tim giá trị max của biểu thức (nums[i]-1)*(nums[j]-1)
-> tìm max1 và max2 trong mảng

max1 = 0 max2=0
a > max1 
     max2 = max1  max1 = a
a > max2  // co the trung nhau
    max2 = a
Input: nums = [1,5,4,5]
Output: 16
*/
int maxProduct(vector<int> &nums)
{
    int max1 = 0, max2 = 0;
    for (int n : nums)
    {
        if (n > max1)
        {
            max2 = max1;
            max1 = n;
        }
        else if (n > max2)
        { // 2 gia tri co the giong nhau
            max2 = n;
        }
    }
    return (max1 - 1) * (max2 - 1);
}
int main()
{

    return 0;
}