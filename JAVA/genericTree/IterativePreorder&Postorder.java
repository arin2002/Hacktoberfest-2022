static class Pair {
    Node node;
    int state;

    public Pair(Node node, int state) {
        this.node = node;
        this.state = state;
    }
}

public static void IterativePreandPostOrder(Node node) {
  String pre = ""

  Stack<Pair> st = new Stack<>();

  st.push(new Pair(node, -1));

  while(!st.isEmpty()) {
      Pair p = st.peek();
      if(p.state == -1) {
          pre.add(p.node.data);
          p.state++;
      } else if(p.state == p.node.children.size()) {
          post.add(p.node.data);
          st.pop();
      } else {
          st.push(new Pair(p.node.children.get(p.state), -1));
          p.state++;
      }
  }
