/*
Problem Description: Snake Ladder Problem

Rishabh takes out his Snakes and Ladders Game, stares the board and wonders: "If I can always roll the die to whatever number I want, what would be the least number of rolls to reach the destination?"

RULES:

The game is played with cubic dice of 6 faces numbered from 1 to A.
Starting from 1 , land on square 100 with the exact roll of the die. If moving the number rolled would place the player beyond square 100, no move is made.
If a player lands at the base of a ladder, the player must climb the ladder. Ladders go up only.
If a player lands at the mouth of a snake, the player must go down the snake and come out through the tail. Snakes go down only.
BOARD DESCRIPTION:

The board is always 10 x 10 with squares numbered from 1 to 100.
The board contains N ladders given in a form of 2D matrix A of size N * 2 where (A[i][0], A[i][1]) denotes a ladder that has its base on square A[i][0] and end at square A[i][1].
The board contains M snakes given in a form of 2D matrix B of size M * 2 where (B[i][0], B[i][1]) denotes a snake that has its mouth on square B[i][0] and tail at square B[i][1].

*/

//The question is solved by Bhavya Gupta

#include <iostream>
#include <cmath>
#include <vector>
#include <queue>
#include <cmath>
#include <map>
using namespace std;
 
int snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B) {
    int n=100;

    vector<int>ways(n+1);
    for(int i=1;i<=100;i++){
        ways[i]=INT_MAX;
    }
    map<int,int>m;
    for(int i=0;i<A.size();i++){
        m[A[i][0]]=A[i][1];
    }
    for(int i=0;i<B.size();i++){
        m[B[i][0]]=B[i][1];
    }
    queue<int>q;
    q.push(1);
    ways[1]=0;
    while(!q.empty()){
        int f=q.front();
        q.pop();
        
        for(int i=1;i<=6;i++){
            int n=f+i;
            if(m.find(n)!=m.end()){
                n=m[n];
            }
            if((n>=1 && n<=100) && ways[n]==INT_MAX){
                ways[n]=ways[f]+1;
                q.push(n);
            }
        }
        
    }
    if(ways[100]==INT_MAX){
        return -1;
    }
    else{
        return ways[100];
    };
}

int main() {
 
    
    return 0;
}