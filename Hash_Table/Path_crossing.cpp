#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool isPathCrossing(string path) {
        unordered_set<string> st;
        st.insert("00");
        int x=0,y=0;
        for(char c : path){
            switch(c){
                case 'N':
                    {
                        y++; break;
                    }
                case 'S':
                    {
                        y--; break;
                    }
                case 'E':
                    {
                        x++; break;
                    }
                 default:
                    {
                        x--;
                    }
            } 
            string temp = to_string(x) + to_string(y);
            if(st.find(temp)!=st.end()){
                return true;
            }
            st.insert(temp);
            
        }
        return false;
    }