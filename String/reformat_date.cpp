#include <bits/stdc++.h>
using namespace std;
/*
Input: date = "6th Jun 1933"
Output: "1933-06-06"
*/
string reformatDate(string date)
{
    map<string, string> mp{
        {"Jan", "01"},
        {"Feb", "02"},
        {"Mar", "03"},
        {"Apr", "04"},
        {"May", "05"},
        {"Jun", "06"},
        {"Jul", "07"},
        {"Aug", "08"},
        {"Sep", "09"},
        {"Oct", "10"},
        {"Nov", "11"},
        {"Dec", "12"},
    };
    stringstream s(date);
    string word;
    vector<string> temp;
    while (s >> word)
    {
        temp.push_back(word);
    }
    string day = "", ans = "";
    if (temp[0].length() == 4)
    {
        day = temp[0].substr(0, 2);
    }
    else
    {
        day = "0" + temp[0].substr(0, 1);
    }
    ans += temp[2] + "-" + mp[temp[1]] + "-" + day;

    return ans;
}
int main()
{
}