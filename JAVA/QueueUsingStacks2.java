class StackQueue
{
    Stack<Integer> s1 = new Stack<Integer>();
    Stack<Integer> s2 = new Stack<Integer>();

    //Function to push an element in queue by using 2 stacks.
    void Push(int x) {
	    s1.push(x);
    }
	
    
    //Function to pop an element from queue by using 2 stacks.
    int Pop() {
        
        if(s1.isEmpty()) return -1;
        
	    while(s1.size() != 1) {
	        s2.push(s1.pop());
	    }
	   
	    int ans = s1.pop();
	    
	    while(!s2.isEmpty()) {
	        s1.push(s2.pop());
	    }
	    
	    return ans;
    }
}
