public static void linearize(Node node){
    
  for(Node child: node.children) {
      linearize(child);
  }

  while(node.children.size() > 1) {
      Node lc = node.children.remove(node.children.size() - 1);
      Node slc = node.children.get(node.children.size() - 1);

      Node tslc = getTail(slc);

      tslc.children.add(lc);
  }
}

public static Node getTail(Node node) {
      while(node.children.size() == 1) {
          node = node.children.get(0);
      }

      return node;
}
