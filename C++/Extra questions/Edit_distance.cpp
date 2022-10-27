/*how many operation we have to do for changing one string to other
ex:  s1="CAT  and s2="CUT"
1) first way is like delte A and after that insert U (it making 2 operation)
2) just replace A with U (it will take only one opertaion)
O/P:1
*/
// recursive solution
#include<iostream>
using namespace std;
int recursive_edit_distance(string s1,string s2,int m,int n){
     
     if(m==0){
        return n;
     }
     if(n==0){
        return m;
     }
    if(s1[m-1]==s2[n-1]){
        return recursive_edit_distance(s1,s2,m-1,n-1);
    }
   
        return 1+min(min(recursive_edit_distance(s1,s2,m,n-1),recursive_edit_distance(s1,s2,m-1,n)),recursive_edit_distance(s1,s2,m-1,n-1));
    
}
int main()
{
   //  string s1="CAT";
   //  string s2="CUT";
     string s1="saturday";
     string s2="sunday";
    cout<<recursive_edit_distance(s1,s2,8,6);
 return 0 ;
}