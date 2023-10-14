public class tower {
    public static void towerOfHanoi(String Sources ,String Helper,String Destination,int num){
        if(num==1){
            System.out.println("Transfer disc " + num + " from " + Sources + " to "+ Destination);
            return;
        }
towerOfHanoi(Sources, Destination, Helper, num-1);
System.out.println("Transfer disc " + num + " from " + Sources + " to "+ Destination);

towerOfHanoi( Helper, Sources, Destination, num-1);
    }
public static void main(String[] args) {
    int n=2;
    towerOfHanoi("S", "H", "D", n);
}
}
