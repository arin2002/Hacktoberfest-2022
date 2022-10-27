static int assignMiceHoles(int n , int[] m , int[] h) {
    Arrays.sort(m);
    Arrays.sort(h);

    int ans = 0;

    for(int i=0; i<n; i++) {
        int diff = Math.abs(m[i]-h[i]);

        if(diff > ans) {
            ans = diff;
        }
    }

    return ans;
}
