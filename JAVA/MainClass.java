package queue;

import java.util.LinkedList;
import java.util.Queue;

public class MainClass {

	public static void main(String[] args) {
		
		Queue <Integer> q = new LinkedList <> () ;
		
//		q.add(45);
//		q.add(12);
//		q.add(32);
//		q.add(89);
//		System.out.println(q);
//		System.out.println(q.remove());
//		System.out.println(q.poll());
//		System.out.println(q.peek());
		MyQueue <Integer> mq = new MyQueue<> () ;
		mq.enqueue(45);
		mq.enqueue(89);
//		mq.enqueue(5);
//		mq.enqueue(9);
		System.out.println(mq.peek());
		System.out.println(mq.dequeue());
		System.out.println(mq.peek());
		System.out.println(mq.dequeue());
		System.out.println(mq.peek());
		mq.enqueue(5);
		System.out.println(mq.peek());
	}

}
