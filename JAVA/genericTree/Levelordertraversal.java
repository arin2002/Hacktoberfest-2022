public static void levelOrder(Node node){
      
    Queue<Node> q = new LinkedList<>();
    
    q.add(node);
    
    while(!q.isEmpty()) {
        Node x = q.poll();
        
        System.out.print(x.data + " ");
        
        for(Node child: x.children) {
            q.add(child);
        }
    }
    
    System.out.print(".");
  }
