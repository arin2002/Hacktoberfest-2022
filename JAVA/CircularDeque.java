class MyCircularDeque {

    class Node {
        int data;
        Node prev, next;
        
        public Node(){}
        
        public Node(int data) {
            this.data = data;
        }
        
        public void delete () {
            next.prev = prev;
            prev.next = next;
        }
    }
    
    static Node head, tail;
    static int size, capacity;
    
    public MyCircularDeque(int k) {
        size = 0;
        capacity = k;
        head = new Node();
        tail = new Node();
        head.next = tail;
        tail.prev = head;
    }
    
    public boolean insertFront(int value) {
        if(size == capacity) return false;
        
        Node toAdd = new Node(value);
    
        toAdd.next = head.next;
        head.next = toAdd;
        toAdd.next.prev = toAdd;
        toAdd.prev = head;
        size++;
        
        return true;
    }
    
    public boolean insertLast(int value) {
        if(size == capacity) return false;
        
        Node toAdd = new Node(value);
        toAdd.next = tail;
        toAdd.prev = tail.prev;
        toAdd.prev.next = toAdd;
        tail.prev = toAdd;
        size++;
        return true;
    }
    
    public boolean deleteFront() {
        if(isEmpty()) return false;
        
        Node toDelete = head.next;
        
        toDelete.delete();
        
        size--;
        return true;
    }
    
    public boolean deleteLast() {
        if(isEmpty()) return false;
        
        Node toDelete = tail.prev;
        
        toDelete.delete();
        
        size--;
        return true;
    }
    
    public int getFront() {
        if(isEmpty()) return -1;
        
        return head.next.data;
    }
    
    public int getRear() {
        if(isEmpty()) return -1;
        
        return tail.prev.data;
    }

    public boolean isEmpty() {
        if(size == 0) return true;
        
        return false;
    }
    
    public boolean isFull() {
        if(size == capacity) return true;
        
        return false;
    }
}
