/* 
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

Solution:
Here we use Stack data structure using C++ STL library to push open parentheses, and when matching closing parentheses is found, the matching open parentheses is popped from stack, thus by the end of the string, if the stack is empty, then return true otherwise return false.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<int> st; //use of Stack to store open parentheses
        st.push('$'); //to denote empty stack
        char ch;
        int n = s.size();
        for(int i=0;i<n;i++)
        {
            ch = s[i];
            switch(ch) 
            {
                    case '(': st.push(ch);
                              break;
                    case '{': st.push(ch);
                              break;
                    case '[': st.push(ch);
                              break;
                    case ']': if(st.top()=='[') 
                                 st.pop();
                              else return false;
                              break;
                    case ')': if(st.top()=='(') 
                                 st.pop();
                              else return false;
                              break;
                    case '}': if(st.top()=='{') 
                                 st.pop();
                              else return false;
                              break;
                    default: continue;
            }
        }
        if(st.top()=='$') //if stack empty, exit from loop
            return true;
        else
            return false;
    }
};