static int msn, mn;
  
public static int msst(Node node) {
    int sum = 0;

    for(Node child: node.children) {
        sum += msst(child);
    }

    sum += node.data;

    if(sum > msn) {
        msn = sum;
        mn = node.data;
    }

    return sum;
}
