import java.util.*;

public class Main {

    private static class Node {
        int data;
        ArrayList<Node> children = new ArrayList<>();
    }

    public static void display(Node node) {
        String str = node.data + " -> ";
        for (Node child : node.children) {
            str += child.data + ", ";
        }
        str += ".";
        System.out.println(str);

        for (Node child : node.children) {
            display(child);
        }
    }

    public static int size(Node node) {

        int s = 0;
        for(Node child: node.children) {
            s += size(child);
        }
        s = s+1;

        return s;
    }

    public static void main(String args[]) {
        int arr[] = {10, 20, 50, -1, 60, -1, -1, 30, 70, -1, 80, 110, -1, 120, -1, -1, 90, -1, -1, 40, 100, -1, -1, -1};

        Stack<Node> st = new Stack<>();
        Node root = null;

        for(int i=0; i<arr.length; i++) {
            if(arr[i] != -1) {
                Node toAdd = new Node();
                toAdd.data = arr[i];

                if(st.isEmpty()) {
                    root = toAdd;
                } else {
                    st.peek().children.add(toAdd);
                }

                st.push(toAdd);
            } else {
                st.pop();
            }
        }

        // display(root);

        System.out.println(size(root));
    }
}
