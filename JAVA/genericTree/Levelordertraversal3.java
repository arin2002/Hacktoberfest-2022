public static void levelOrderLinewiseZZ(Node node){
    Stack<Node> ms = new Stack<>();
    Stack<Node> cs = new Stack<>();
    
    ms.add(node);
    int count = 1;
    
    while(!ms.isEmpty()) {
        Node x = ms.pop();
        System.out.print(x.data + " ");
        
        if(count%2 != 0) {
            for(int i=0; i<x.children.size(); i++) {
                cs.add(x.children.get(i));
            }
        } else {
            for(int i=x.children.size()-1; i>=0; i--) {
                cs.add(x.children.get(i));
            }
        }
        
        if(ms.size() == 0) {
            ms = cs;
            cs = new Stack<>();
            count++;
            System.out.println();
        }
    }
  }
