// Maria plays college basketball and wants to go pro. Each season she maintains a record of Her Play
// She tabulates the number of times she breaks her season record for most points and Least points in a game.
// Points scored in the first game establish her record for the season, and she begins counting from there.

#include <bits/stdc++.h>

using namespace std;


vector<int> breakingRecords(vector<int> scores) {
    int maxcount=0;
    int mincount =0;
    vector<int> count;
    int max =scores[0],min=scores[0];
    for(auto i:scores){
        cout<<i<<endl;
        if(i>max){
            max = i;
            maxcount++;
        }
        else if(i<min){
            min=i;
            mincount++;
        }
    }
    count.push_back(maxcount);
    count.push_back(mincount);    
    return count;
}

int main(){
    int n;
    cin>>n;
    vector<int> scores(n);
    for(int i=0;i<n;i++){
        cin>>scores[i];
    }
    vector<int> result = breakingRecords(scores);
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}