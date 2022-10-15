ArrayList<Integer>TopK(ArrayList<Integer> list, int k) {
    int i,j=0;
    int arr[] = new int[10002];

    for(i=0;i<list.size();i++) {
        arr[list.get(i)]++;
    }

    ArrayList<Integer>res[] = new ArrayList[100002];
    for(i=0;i<100002;i++) {
        ArrayList<Integer>temp = new ArrayList<Integer>();
        res[i]=temp;
    }

    for(i=0;i<10002;i++) {
        if(arr[i]!=0) {
            res[arr[i]].add(i);
        }

    }

    ArrayList<Integer>ans = new ArrayList<Integer>();
    for(i=100001;i>=0;i--) {
        for(int p = res[i].size()-1;p>=0;p--) {
            if(j!=k)
                ans.add(res[i].get(p));
            else
                break;
            j++;
        }
    }
    return ans;
}
