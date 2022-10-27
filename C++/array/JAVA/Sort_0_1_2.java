class Sort_0_1_2
{
    public static void main(String args[])
    {
        int arr[] = {1,2,0,2,1,2,0,1};
        int n = arr.length;
        int l=0, mid = 0, high = n-1, temp = 0;
        while(mid <=high)
        {
            switch(arr[mid]){
                case 0: temp = arr[l];
                        arr[l] = arr[mid];
                        arr[mid] = temp;
                        mid++;
                        l++;
                        break;
                case 1: mid++;
                        break;
                case 2: temp = arr[high];
                        arr[high] = arr[mid];
                        arr[mid] = temp;
                        high--;
                        break;
            }
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}