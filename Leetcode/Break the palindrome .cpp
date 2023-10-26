class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1) return "";
        int l = 0;
        int h = palindrome.size()-1;
        while(l<h){
            if(palindrome[l]==palindrome[h] && palindrome[l]=='a'){
                ++l;
                --h;
            }
            else{
                palindrome[l] = 'a';
                return palindrome;
            }
        }
        palindrome[palindrome.size()-1] = 'b';
        return palindrome;
    }
};
