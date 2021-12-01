#include <bits/stdc++.h>
using namespace std;
bool areNumbersAscending1(string s)
{
    vector<string> token;
    stringstream ss(s);
    string words;
    while (ss >> words)
    {
        if (words[0] >= '0' && words[0] <= '9')
        {
            token.push_back(words);
        }
    }
    int len = token.size();
    for (int i = 0; i < len - 1; ++i)
    {
        int a = stoi(token[i]);
        int b = stoi(token[i + 1]);
        if (a >= b)
            return false;
    }
    return true;
}
bool areNumbersAscending2(string s)
{
    int prev = 0, cur = 0;
    for (auto ch : s)
    {
        if (isdigit(ch))
            cur = cur * 10 + (ch - '0');
        else if (cur != 0)
        {
            if (prev >= cur)
                return false;
            prev = cur;
            cur = 0;
        }
    }
    return cur == 0 || prev < cur;
}
int main()
{
    cout << areNumbersAscending1("4 5 11 26");
}