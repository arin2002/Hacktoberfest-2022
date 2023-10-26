Detect A loop in  A linked list
In this method we have to tranverse the list using two pointer one can be slow pointer and one can be fast pointer.
T.C o(n)
S.C o(1)
class cycle
{
Node head;
class Node
{
int data;
Node next;
Node(int d)
{
data=d;
next=null;
}
}
//Insert a node
 public void push(int new_data)
 {
Node new_node=new Node(new_data);
   new_node.next=head;
   head=new_node;
 }
 // To detect a loop
  {
    void detectLoop()
    {
      Node slowptr=head;
      Node fastptr=head;
       while (fastPtr != null && fastPtr.next != null) {
            fastPtr = fastPtr.next.next;
            slowPtr = slowPtr.next;
            if (slowPtr == fastPtr)
                return true;
 
        }
        return false;
    }
