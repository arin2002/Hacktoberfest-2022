//GOLDMAN SACH CODING ROUND - 28th JUNE 2021//

//QUESTION :  Write a program to input a set of words and group the anagram together.


//THIS CODE TIME COMPLEXITY IS O(N^2)



#include<iostream>
#include<unordered_map>
using namespace std;

void anagram(string s1,string s2, unordered_map<string,int> &m){
    int flag = 0;
    unordered_map<char,int> m1;
    int length = s1.length();
    int i,j;

    for(int i=0;i<length;i++){
        m1[s1[i]] ++;
    }
    for(int i=0;i<length;i++){
        m1[s2[i]] --;
    }
    for(int i=0;i<length;i++){
        if(m1[s1[i]] !=0){
            flag = 1;
            break;
        }
    }
    if(flag ==0){
        cout<<"[ '"<<s1<<"' , '"<<s2<<"' ]\n";
        m[s1]--;
        m[s2]--;
    }
}

int main(){
    int n;
    cout<<"Enter total number of words : ";
    cin>>n;
    string str[n];
    unordered_map<string,int> m;
    for(int i=0;i<n;i++){
        cin>>str[i];
        m[str[i]]++;
    }

    for(int i=0;i<n;i++){
        string s1 = str[i];
        for(int j =i+1;j<n;j++){
            string s2 = str[j];
            if(s1.length() == s2.length()){
                anagram(s1,s2, m);
            }
        }
    }
    for(int i=0;i<n;i++){
        if(m[str[i]] !=0){
            cout<<"["<<str[i]<<"]\n";
        }
    }
    return 0;
}