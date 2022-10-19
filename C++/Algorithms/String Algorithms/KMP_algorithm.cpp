// Author: Siddharth Verma
#include<bits/stdc++.h>
using namespace std;
void computeLCParray(vector<int>&lcp,int m,string pat)
{
	int len=0,i=1;
	lcp[0]=0;
	while(i<m)
    {
        if(pat[len]==pat[i])
        {
            len++;
            lcp[i]=len;
            i++;
        }
        else
        {
            if(len!=0)
                len=lcp[len-1];
            else
            {
                lcp[i]=0;
                i++;
            }
        }
    }
}
int main()
{
	int i=0,j=0;
	string txt,pat;
	cout<<"Enter the source string and the pattern to find:\n";
	cin>>txt>>pat;
	int n=txt.size(),m=pat.size();
	vector<int>lcp(m);
	computeLCParray(lcp,m,pat);
	while(i<n)
    {
        if(txt[i]==pat[j])
        {
            i++;
            j++;
        }
        if(j==m)
        {
            printf("Pattern found at index %d\n",i-j);
            j=lcp[j-1];
        }
        else if(i<n && txt[i]!=pat[j])
        {
            if(j!=0)
                j=lcp[j-1];
            else
                i++;
        }
    }
	return 0;
}
