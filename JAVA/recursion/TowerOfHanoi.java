static void hanoi(int n, int from, int to, int aux) {
        if(n==0) {
            return;
       }

       hanoi(n-1,from,aux,to);
         
       System.out.println("move disk "+ n+ " from rod "+ from+ " to rod "+ to);
       hanoi(n-1,aux,to,from);
}
