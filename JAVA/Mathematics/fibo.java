import java.util.*;

public class fibo {

    static int[] fib(int x){

        int arr[]=new int[x];

        int i=0;
        while(i<x){
            arr[i]=i;
            i++;
        }

       int j=2;
        while(j<x){
           arr[j]=arr[j-1]+arr[j-2];
           j++;
                      }

        return arr;

    }
    public static void main(String[] args) {

Scanner scan=new Scanner(System.in);
System.out.print("Enter Number to print Fibonacci series:");
int i=0,j=scan.nextInt();
int arr[]=fib(j);
while(i<j){
    System.out.print(arr[i]+" ");
    i++;

}


    }



}
