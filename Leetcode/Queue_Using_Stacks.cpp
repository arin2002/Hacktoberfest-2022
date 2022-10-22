/*
Queue, using stacks
Implement a first in first out (FIFO) queue using only two stacks. The implemented queue should support all the functions of a normal queue (push, peek, pop, and empty).
Implement the MyQueue class:
void push(int x) Pushes element x to the back of the queue.
int pop() Removes the element from the front of the queue and returns it.
int peek() Returns the element at the front of the queue.
boolean empty() Returns true if the queue is empty, false otherwise.
Notes:
You must use only standard operations of a stack, which means only push to top, peek/pop from top, size, and is empty operations are valid.
Depending on your language, the stack may not be supported natively. You may simulate a stack using a list or deque (double-ended queue) as long as you use only a stack's standard operations.
 
Example 1:
Input
["MyQueue", "push", "push", "peek", "pop", "empty"]
[[], [1], [2], [], [], []]
Output
[null, null, null, 1, 1, false]
Explanation
MyQueue myQueue = new MyQueue();
myQueue.push(1); // queue is: [1]
myQueue.push(2); // queue is: [1, 2] (leftmost is front of the queue)
myQueue.peek(); // return 1
myQueue.pop(); // return 1, queue is [2]
myQueue.empty(); // return false
*/



class MyQueue {

public:
    //Still, again...
    //For using stack as queue, using two stacks
    stack<int> s1, s2;
    MyQueue() 

    {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    //Removes the element from the front of the queue and returns it.
    int pop() {
        if(s1.empty() && s2.empty())
            return -1;
        if(s2.empty())
        {
            while(!s1.empty()){
                s2.push(s1.top());  //Adding the top element of s1 into bottom of s2, as to make like queue, when we'll remove the top of s2 as pop
                s1.pop();
            }
        }
        int temp = s2.top();
        s2.pop();
        return temp;
        
    }
    
    //Returns the element at the front of the queue.
    int peek() {
        if(!s2.empty())
            return s2.top();  //Queue, that was created during pop
        else{
            while(!s1.empty())
            {
                int val = s1.top();
                s2.push(val);
                s1.pop();
            }
        return s2.top();
    }
        
    }
    
    bool empty() {
        if(s1.empty() && s2.empty())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
