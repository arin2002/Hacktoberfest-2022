public static void main (String[] args) {
  Scanner sc = new Scanner (System.in);
  int t = sc.nextInt();
  while(t-- > 0) {
      int n = sc.nextInt();
      int arr [] = new int [n];
      for(int i=0; i<n; i++) {
          arr[i] = sc.nextInt();
      }
      int k = sc.nextInt();

      ArrayList<Integer> ans = negativeInteger(arr, k);

      for(int i: ans) {
          System.out.print(i + " ");
      }
      System.out.println();
  }
}

static ArrayList<Integer> negativeInteger(int arr[], int k) {
    int n = arr.length;
    ArrayList<Integer> ans = new ArrayList<>();

    Deque<Integer> dq = new LinkedList<>();

    int i=0;
    for(; i<k; i++) {
        if(arr[i]<0) dq.addLast(i);
    }

    for(; i<n; i++) {
        if(!dq.isEmpty()) {
            ans.add(arr[dq.peekFirst()]);
        } else {
            ans.add(0);
        }


        while(!dq.isEmpty() && dq.peekFirst() <=i-k) {
            dq.removeFirst();
        }

        if(arr[i] < 0) dq.addLast(i);
    }

    if(!dq.isEmpty()) {
          ans.add(arr[dq.peekFirst()]);
      } else {
          ans.add(0);
      }
    return ans;
}
