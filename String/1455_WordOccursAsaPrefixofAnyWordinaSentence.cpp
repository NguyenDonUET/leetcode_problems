#include <bits/stdc++.h>
using namespace std;
/*
- Dùng stringstream trích xuất các từ trong câu
- Nếu searchWord là prefix của word trong sentence thì trả về biến đếm
*/
int isPrefixOfWord(string sentence, string searchWord)
{
    int cnt = 1;
    stringstream s(sentence);
    string word;
    while (s >> word)
    {
        if (word.find(searchWord) == 0)
        {
            return cnt;
        }
        ++cnt;
    }
    return -1;
}
int main()
{
    string sentence = "hellohello hellohellohello", searchWord = "ell";
    cout << isPrefixOfWord(sentence, searchWord);
    return 0;
}
