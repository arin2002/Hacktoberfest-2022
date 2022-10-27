package codeforces;

import java.util.Arrays;

import FastReader.FastReader;

public class SongCompression {
    public static void main(String[] args) {
        FastReader fs = new FastReader();
            int n = fs.nextInt();
            int m = fs.nextInt();
            int s =0,s1=0,c=0;
            int[] a = new int[n];
            int[] b = new int[n];

            for (int i = 0; i < b.length; i++) {
                a[i] = fs.nextInt();
                b[i] = fs.nextInt();
                s += b[i];
                s1 += a[i];
                a[i] = a[i] - b[i];
            }

            if(s>m){
                System.out.println(-1);
            }else{
            s =0;
            Arrays.sort(a);
            int diff = s1 - m;
            if(diff == 0){
                System.out.println(0);
            }else{
            for (int i = n-1; i >=0; i--) {
               diff -= a[i];
               c++;
                if(diff<=0){
                    break;
                }
            }
        }

            System.out.println(c);
        }
    }
}
