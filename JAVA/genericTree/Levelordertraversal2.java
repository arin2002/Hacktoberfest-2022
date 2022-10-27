public static void levelOrderLinewise(Node node){
    Queue<Node> mq = new LinkedList<>();
    Queue<Node> cq = new LinkedList<>();
    
    mq.add(node);
    while(!mq.isEmpty()) {
        Node x = mq.poll();
    
        System.out.print(x.data + " ");
        for(Node child: x.children) {
            cq.add(child);
        }
        
        if(mq.size() == 0) {
            System.out.println();
            mq = cq;
            cq = new LinkedList<>();
        }
    }
  }
