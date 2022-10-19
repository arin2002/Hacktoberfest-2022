#include<bits/stdc++.h> 
using namespace std; 
  
typedef pair<int, int> pi; 
  
class Stack{ 
      
    int count; 
    priority_queue<pair<int, int> > pq; 
    
    public: 
        Stack():count(0){} 
        void push(int n); 
        void pop(); 
        int top(); 
        bool isEmpty(); 
}; 
  
void Stack::push(int n){ 
    count++; 
    pq.push(pi(count, n)); 
} 
  
void Stack::pop(){ 
    if(pq.empty()){ 
        cout<<"Empty Stack!!!";
    } 
    count--; 
    pq.pop(); 
} 
  
int Stack::top(){ 
    pi temp=pq.top(); 
    return temp.second; 
} 
  
bool Stack::isEmpty(){ 
    return pq.empty(); 
} 
  
int main(){
    
    Stack* s=new Stack(); 
    s->push(1); 
    s->push(2); 
    s->push(3);
    
    while(!s->isEmpty()){ 
        cout<<s->top()<<" "; 
        s->pop(); 
    } 
}
