#include <bits/stdc++.h>
using namespace std;
/*
Input: s = "is2 sentence4 This1 a3"
Output: "This is a sentence"
*/
string sortSentence(string s)
{
    string sentence = "";
    vector<string> words(10);
    string temp = "";
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] >= '1' && s[i] <= '9')
        {
            words[s[i] - '0'] = temp + ' ';
            i++; // bỏ qua dấu cách
            temp = "";
        }
        else
        {
            temp += s[i];
        }
    }
    for (int i = 1; i < words.size(); ++i)
    {
        sentence += words[i];
    }
    sentence.pop_back();
    return sentence; // xóa space ở cuối câu
}
int main()
{
}