public class Move_neg_to_side {
    public static void main(String args[])
    {
        int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
        int n = arr.length;
        int l = 0, h = n-1, c = 0;
        while(l<=h)
        {
            if(arr[l] < 0)
            {
                int t = arr[l];
                arr[l] = arr[c];
                arr[c++] = t;
            }
            else
            {
                int t = arr[l];
                arr[l] = arr[h];
                arr[h--] = t;
            }
            l++;
        }
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
}
