public class ReverseLinkedList{
    Node head;
    static class Node{
        int data;
        Node next;
        Node(int d){
            data = d;
            next = null;
        }
    }
    public static ReverseLinkedList add(ReverseLinkedList list, int data){
        Node new_node = new Node(data);
        if(list.head == null)
            list.head = new_node;
        else{
            Node start = list.head;
        while(start.next != null)
            start = start.next;
        start.next = new_node;
        }
        return list;
    }
    public static void printList(ReverseLinkedList list){
        Node start = list.head;
        while(start != null){
            System.out.print(start.data + " ");
            start = start.next;
        }
        System.out.println();
    }
    public static void reverse(ReverseLinkedList list,int k){
        Node curr = list.head;
        Node prev = null;
        Node next = null;
        Node begin = null;
        while(curr != null){
            Node x = curr;
            for(int i=1;i<=k;i++){
                if(curr == null)
                    break;
                next = curr.next;
                curr.next = prev;
                prev = curr;
                curr = next;
            }
            if(begin == null){
                begin = x;
                list.head = prev;
            }
            else{
                begin.next = prev;
                begin = x;
            }
            prev= begin;
        }
        begin.next = null;
    }
    public static void main(String[] args) {
        ReverseLinkedList list = new ReverseLinkedList();
        list = add(list,1);
        list = add(list,2);
        list = add(list,3);
        list = add(list,4);
        list = add(list,5);
        list = add(list,6);
        list = add(list,7);
        printList(list);
        reverse(list,4);
        printList(list);
    }
}