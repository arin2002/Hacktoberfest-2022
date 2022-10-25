static int dia = 0;
  
public static int diameter(Node node) {
    int dch = -1, sdch = -1;

    for(Node child: node.children) {
        int ch = diameter(child); 

        if(dch < ch) {
            sdch = dch;
            dch = ch;
        } else if(sdch < ch) {
            sdch = ch;
        }
    }

    dia = Math.max(dch + sdch + 2, dia);
    dch++;

    return dch;
}
