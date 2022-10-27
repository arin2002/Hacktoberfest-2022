int[] findTwoElement(int arr[], int n) {
    int axorb = 0;

    for(int i=1; i<=n; i++) {
        axorb ^= i;
    }

    for(int i=0; i<n; i++) {
        axorb ^= arr[i];
    }
    int a = 0, b = 0;

    int rsb = axorb & - axorb;

    for(int i=0; i<n; i++) {
        if((arr[i] & rsb) == 0) {
            a = a ^ arr[i];
        } else {
            b = b ^ arr[i];
        }
    }

    for(int i=1; i<=n; i++) {
        if((i & rsb) == 0) {
            a = a ^ i;
        } else {
            b = b ^ i;
        }
    }

    int ans[] = new int [2];

    for(int i=0; i<n; i++) {
        if(arr[i] == a) {
            ans[0] = a;
            ans[1] = b;
        } else if(arr[i] == b) {
            ans[0] = b;
            ans[1] = a;
        }
    }

    return ans;
}
