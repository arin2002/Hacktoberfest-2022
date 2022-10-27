public static Node linearize2(Node node) {
      
    if(node.children.size() == 0) return node;

    Node lkt = linearize2(node.children.get(node.children.size()-1));

    while(node.children.size() > 1) {
        Node last = node.children.remove(node.children.size()-1);
        Node slast = node.children.get(node.children.size()-1);

        Node slastt = linearize2(slast);

        slastt.children.add(last);
    }

    return lkt;
}
