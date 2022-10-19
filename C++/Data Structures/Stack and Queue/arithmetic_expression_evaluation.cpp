#include<bits/stdc++.h>
using namespace std;


int precedence(char ch){
    if(ch == '^'){
        return 3;
    }
    else if(ch == '*' || ch=='/'){
        return 2;
    }
    else if(ch == '+' || ch=='-'){
        return 1;
    }
    else{
        return 0;
    }
}

string infixToPostfix(string s){
    stack<char> st;
    string result;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch>='0' && ch<='9'){
            result+=ch;
        }
        else if(ch=='('){
            st.push(ch);
        }
        else if(ch==')'){
            while(st.top() !='('){
                result+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() && precedence(ch) <= precedence(st.top())){
                result+=st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while(!st.empty()){
        result+=st.top();
        st.pop();
    }
    return result;
}

void answer(string prefix){
    stack<int> s;
    for(int i=0;i<prefix.length();i++){
        char ch = prefix[i];
        if(ch >='0' && ch<='9'){
            s.push((int)ch - 48);   //ASCII code of 0 is 48
        }
        else{
            
            int ans = 0;
            int a = s.top();
            s.pop();
            //cout<<"top"<<a<<endl;
            int b = s.top();
            s.pop();
            //cout<<"b"<<b<<endl;
            if(ch == '^'){
                ans = b^a;
                s.push(ans);
            }
            else if(ch == '*'){
                ans = b*a;
                s.push(ans);
            }
            else if(ch == '/'){
                ans = b/a;
                s.push(ans);
            }
            else if(ch == '+'){
                ans = b+a;
                s.push(ans);
            }
            else if(ch == '-'){
                ans = b-a;
                s.push(ans);
            }
        
            
        }

    }
    cout<<s.top();
}


int main(){
    string str;
    cout<<"Enter infix expression\n";
    cin>>str;
    string prefix;
    prefix = infixToPostfix(str);
    //cout<<prefix;
    answer(prefix);
    return 0;
}