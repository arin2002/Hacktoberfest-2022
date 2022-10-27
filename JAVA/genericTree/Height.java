public static int height(Node node) {
  int h = -1;

  for(Node child: node.children) {
      h = Math.max(height(child), h);
  }

  h += 1;

  return h;
}
