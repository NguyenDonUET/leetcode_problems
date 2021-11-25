#include<iostream>
#include<vector>
#include<set>
using namespace std;
string change[26] ={ ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.." };
int uniqueMorseRepresentations(vector<string>words) {
	set<string>s;
	string t;
	for (int i = 0; i < words.size(); ++i)
	{
		t = "";
		for (int j = 0; j < words[i].size(); ++j)
		{
			t +=change[words[i][j] - 'a'];
			
		}
		s.insert(t);
	}
	return s.size();
}
int main(){

}