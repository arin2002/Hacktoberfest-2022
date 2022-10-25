package deque;

import java.util.ArrayDeque;

public class MainClass {

	public static void main(String[] args) {
		
		 ArrayDeque <Integer> mq = new ArrayDeque<>();
//		 mq.offerFirst(45);
		 mq.addFirst(89);
//		 mq.offerFirst(12);
//		 
//		 mq.pop();
//		 System.out.println(mq.peekFirst());
		 
		 Mydeque <Integer> md = new Mydeque <> () ;
		 
		 md.addLast(13);
//		 md.addFirst(46);
//		 md.addFirst(78);
//		 md.addLast(49);
//		 md.addLast(99);
//		 md.addFirst(8);
		 
		 System.out.println(md.removeLast());
//		 md.addFirst(9);
//		 System.out.println(md.removeLast());
		 System.out.println(md.getFirst());
//		 System.out.println(md.removeFirst());
//		 System.out.println(md.getLast());
//		 System.out.println(md.removeFirst());
//		 System.out.println(md.getFirst());
//		 System.out.println(md.getLast());
	}

}
