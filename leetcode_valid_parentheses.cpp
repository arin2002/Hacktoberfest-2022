class Solution {
public:
    bool isValid(string str) {
          stack<char> s;
        for(int i=0;i<str.length();i++){
          char ch = str[i]; 
   //storing opening brackets in stack and then popping them out when similar one is found
            if( (ch == '{') ||
               (ch == '(') ||
               (ch == '[') ){
                s.push(ch);
            }
            else
                //closing bracket ki bat ai to humne check kia cllsing and openeing 

            if(!s.empty()){ 
                                char top = s.top();
               if( (ch == '}' && top == '{' ) ||
                    (ch == ')' && top == '(' ) ||
                    (ch == ']' && top == '[' ) ){
                    s.pop();
                } 
                else
                    return false;
            }
             else //stack empty hua to vo check hi kisse krega char ko 
                 return false;
        } 
     if(s.empty())
        return true;
    else
        return false;
}
};
