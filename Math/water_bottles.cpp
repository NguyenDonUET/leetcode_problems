#include<iostream>
#include<vector>
#include<set>
using namespace std;
int numWaterBottles(int numB, int numE) {
        int res = numB;
        while(numB >= numE){
            res += numB / numE;
            numB = (numB/numE) + (numB % numE);
        }
        return res;
    }
int main(){

}