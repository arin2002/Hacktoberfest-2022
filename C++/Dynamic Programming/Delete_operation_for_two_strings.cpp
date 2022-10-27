#include<bits/stdc++.h>
using namespace std;
/*
github => sarveshmaurya306
problem name => delete operation for two strings to make both equal
problem link => https://leetcode.com/problems/delete-operation-for-two-strings/
*/

// recursive code for lcs;
int findLcs(string str1, string str2){
        if(str1=="" || str2=="")
                return 0;
        if(str1[0]==str2[0])
                return 1 + findLcs(str1.substr(1), str2.substr(1));
        else
                return max(findLcs(str1.substr(1), str2), findLcs(str1, str2.substr(1)));
		//time complexity => O(2^n)
}

//iterative code for lcs;
int dpLCS(string str1, string str2){
        int m = str1.size(), n = str2.size();
        int dp[m + 1][n + 1];

        for (int i = 0; i <= m;i++)
                dp[i][0] = 0;
        for (int j = 0; j <= n;j++)
                dp[0][j]=0;

        for (int i = 1; i <= m;i++){
                for (int j = 1; j <= n;j++){
                        if(str1[i-1]==str2[j-1])
                                dp[i][j] = 1 + dp[i - 1][j - 1];
                        else
                                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
        }
        return dp[m][n];
		// time complexity => O(n^2)
}

int main() {
        string str1, str2;
        cin >> str1 >> str2;
        // int lcslen = findLcs(str1, str2);
        int dpLCSlen = dpLCS(str1, str2);
        cout << (str1.size() - dpLCSlen) + (str2.size() - dpLCSlen) << endl;

        /* logic => 
                step 1 => find length of all common sequnce ie., LCS length
                //? string a -> lcs -> string str2
                step 2 => length of string a - lcs length => gives deletion length for a
                step 3 => length of string str2 - lcs length => gives insertion length for str2
                step 4 => summation of step2 and step 3 will give us total opertaion to make a -> str2
        */
		//time complexity => O(n^2);
}
