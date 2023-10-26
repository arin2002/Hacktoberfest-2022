import java.util.*;
class LCMofArray {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("no of elements in array: ");
        int n = sc.nextInt();
        int arr[]= new int[n];
        System.out.println("enter array elements: ");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        sc.close();
        int val= lcm(arr);
        System.out.println("LCM of array: "+val);
    }
    static int  lcm(int[] arr){
        int ans=1;
        int divisor=2;
        while(true){
            boolean divisible = false;
            int count=0;
            for(int i=0;i<arr.length;i++){
                if(arr[i]==0){
                    return 0;
                }
                if(arr[i]<0){
                    arr[i]=arr[i]*(-1);
                }
                if(arr[i]==1){
                    count++;
                }
                if(arr[i]%divisor==0){
                    divisible= true;
                    arr[i]= arr[i]/divisor;
                }
            }
            if(divisible){
                ans=ans*divisor;
            }
            else{
                divisor++;
            }
            if(count==arr.length){
                return ans;
            }


        }

}
}

