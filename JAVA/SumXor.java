public long SumXOR (int arr[], int n) {
        
      long ans = 0, m = 1;

      for(int i=0; i<32; i++) {
          int cur = 0;
          for(int j=0; j<n; j++) {
              if((arr[j] & (1<<i)) == 0) cur++;
          }

          ans += (long) (cur * (n-cur) * m);
          m *= 2;
      }

      return ans;
  }
