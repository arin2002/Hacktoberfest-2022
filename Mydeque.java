package deque;

public class Mydeque <E>{
	
	Node <E> head , tail ;
	
	public void addFirst(E data) {
		Node<E> toAdd = new Node<E>(data) ;
		
		if(head == null) {
			head = tail = toAdd ;
			return ;
		}
		
		head.next = toAdd ;
		toAdd.prev = head ;
		head = toAdd ;
	}
	
	public void addLast(E data) {
		Node<E> toAdd = new Node<E> (data) ;
		
		if(head == null) {
			head = tail = toAdd ;
			return ;
		}
		
		tail.prev = toAdd ;
		toAdd.next = tail ;
		tail = toAdd;
	}
	
	public E removeFirst() {
		if(head == null) {
			return null ;
		}
		
		Node <E> toRemove = head ;
		
		head = head.prev ;
		head.next = null ;
		
		if(head == null) {
			tail = null ;
		}
		
		return toRemove.data ;
	}
	
	public E removeLast() {
		if(head == null) {
			return null ;
		}
		
		Node<E> toRemove = tail ;
		
		tail = tail.next ;
		tail.prev = null ;
		
		if(tail == null) {
			head = null ;
		}
		
		return toRemove.data ;
	}
	
	public E getFirst() {
		Node<E> first = head ;
		
		if(head == null) {
			return null ;
		}
		
		return first.data ;
	}
	
	public E getLast() {
		Node<E> last = tail ;
		
		if(tail == null) {
			return null ;
		}
		return last.data ;
	}
	
	public static class Node<E>{
		E data ;
		Node<E> next , prev ;
		
		public Node(E data) {
			this.data = data ;
			this.next = this.prev = null ;
		}
	}
	
}
