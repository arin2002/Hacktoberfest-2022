static int RulingPair(int arr[], int n) { 
      int ans = -1;
      Map<Integer, Integer> map = new HashMap<>();

      for(int i=0; i<n; i++) {
          List<Integer> list = new ArrayList<>();
          int cur = 0, temp = arr[i];
          while(temp > 0) {
              cur += temp % 10;
              temp /= 10;
          }
          if(!map.containsKey(cur)) {
              map.put(cur, i);
          } else {
              int other = map.get(cur);
              ans = Math.max(ans, arr[i] + arr[other]);
              if(arr[other] < arr[i]) map.put(cur, i);
          }
      }

      return ans;
}
