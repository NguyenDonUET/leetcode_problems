#include <iostream>
#include <vector>
using namespace std;
/**
 Chuyển ký tự ith trong s đến vị trí indices[i] trong chuỗi shuffle
 */
string restoreString(string s, vector<int> &indices)
{
    string shuffle = s;
    for (int i = 0; i < s.length(); ++i)
    {
        shuffle[indices[i]] = s[i];
    }
    return shuffle;
}
int main()
{
}