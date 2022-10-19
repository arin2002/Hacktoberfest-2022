//Code to check if 2 strings are anagrams of each other..
#include <iostream>
#include<unordered_map>
#include<string>
using namespace std;
bool checkAnagram(string str1,string str2,int l1,int l2){
    unordered_map<char,int> mp;
    for(int i=0;i<l1;i++){
        mp[str1[i]]++;
    }
    for(int i=0;i<l2;i++){
        mp[str2[i]]--;
    }
    for(auto x:mp) if(x.second!=0) return false;
    return true;
}
int main()1 
{
    int t;
    cin >> t;
    while (t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        if(checkAnagram(str1,str2,str1.length(),str2.length())){
            cout<<str1<<" and "<<str2<<" are anagrams...\n";
        }
        else{
            cout<<"Not anagrams";
        }
    }
}

//By Rajat Dhull
