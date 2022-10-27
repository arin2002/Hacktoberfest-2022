static int maxCandy(int height[], int n)  { 
    int l = 0, r = n-1;

    int area = 0, width = 0, h = 0, ans = 0;

    while(l < r) {
        width = r-l-1;
        h = Math.min(height[l], height[r]);
        area = width*h;

        ans = Math.max(ans, area);

        if(height[l] < height[r]) {
            l++;
        } else {
            r--;
        }
    }

    return ans;
}
