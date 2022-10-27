import java.util.*;

public class Main {
    public static void main(String args[]) {
        Queue<Integer> q =  new LinkedList<>();
        q.add(11);
        q.add(12);
        q.add(13);
        q.add(14);
        q.add(15);
        q.add(16);
        q.add(17);
        q.add(18);
        q.add(19);
        q.add(20);
        interleave(q);
    }

    static void interleave(Queue<Integer> q) {
        int mid = q.size() / 2;

        Stack<Integer> st = new Stack<>();

        for(int i=0; i<mid; i++) {
            st.push(q.remove());
        }

        while(!st.isEmpty()) q.add(st.pop());

        for(int i=0; i<mid; i++) {
            q.add(q.remove());
        }

        for(int i=0; i<mid; i++) {
            st.push(q.remove());
        }

        while(!st.isEmpty()) {
            q.add(st.pop());
            q.add(q.remove());
        }

        System.out.println(q);
    }
}
