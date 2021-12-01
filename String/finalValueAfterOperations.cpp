#include <bits/stdc++.h>
using namespace std;
/*
Input: operations = ["--X","X++","X++"]
Output: 1
*/
int finalValueAfterOperations(vector<string> &op)
{
    int x = 0;
    for (int i = 0; i < op.size(); i++)
    {
        if (op[i][1] == '+')
            x++;
        else
            x--;
    }
    return x;
}
int main()
{
}