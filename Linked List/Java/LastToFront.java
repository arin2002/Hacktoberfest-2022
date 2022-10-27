public class LastToFront {
    static Node head = null;
    static class Node{
        Node next;
        int data;
        Node(int d){
            data = d;
            next = null;
        }
    }
    public void insert(int d){
        Node curr = head;
        Node new_node = new Node(d);
        if(head == null){
            head = new_node;
            return;
        }
        while(curr.next != null)
            curr = curr.next;
        curr.next = new_node;
    }
    public void insertpos(int position,int d){
        Node current = head;
        Node new_node = new Node(d);
        int count =0;
        if(position == 1){
            new_node.next = head;
            head = new_node;
            return;
        }
        while(count < position-1){
            current = current.next;
            count++;
        }
        new_node.next = current.next;
        current.next = new_node;
    }
    public void print(){
        Node curr = head;
        while(curr != null){
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }
    public Node moveLast(){
        Node curr = head;
        Node prev = null;
        while(curr.next != null){
            prev = curr;
            curr = curr.next;
        }
        prev.next = null;
        curr.next = head;
        head = curr;
        return head;
    }
    public static void main(String[] args) {
      LastToFront list = new LastToFront();
      list.insert(15);
      list.insert(20);
      list.insert(15);
      list.insert(4);
      list.insert(10);
      list.print();
    //   Node res = list.moveLast();
      list.insertpos(2,8);
      list.print();
    }
}
