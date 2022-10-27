int transfigure (String a, String b) {
  int l = a.length() - 1, r = b.length() - 1;
  int ans = 0;

  if(l != r) return -1;

  int count[] = new int [256];

  for(l=0; l<a.length(); l++) {
      count[a.charAt(l)]++;
      count[b.charAt(l)]--;
  }

  for(l=0; l<256; l++) {
      if(count[l] != 0) return -1;
  }

  l = a.length() - 1;
  r = b.length() - 1;
  while(l >= 0) {
      if(a.charAt(l) != b.charAt(r)) {
          ans++;
      } else {
         r--; 
      }
      l--;
  }

  return ans;
}
