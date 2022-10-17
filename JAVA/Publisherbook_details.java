import java.util.Scanner;
class Publisher{
    String publisher;
    Publisher(String det){
        this.publisher=det;
    }
}
class Book extends Publisher{
    String book;
    Book(String det,String tex){
        super(det);
        book=tex;

    }
}
class Literature extends Book{
    String category;
    Literature(String det, String tex){
        super(det, tex);
    }
    void display(){
        System.out.println("Publisher :"+publisher);
        System.out.println("Book :"+book);
    }
}
class Fiction extends Book{
    Fiction(String det, String tex){
        super(det, tex);
    }
    void display(){
        System.out.println("Publisher :"+publisher);
        System.out.println("Book :"+book);
    }
}
public class bookDetails{
    public static void main(String[] args) {
        System.out.print("\nEnter the No. of Literature Books : ");
        Scanner sc1 = new Scanner(System.in);
        int num = sc1.nextInt();
        Literature arr[]=new Literature[num];
        System.out.println("\n Enter the Literature Book Details\n");
        int x = 0,j=0;
        Scanner sc =new Scanner(System.in);
        for(int i =0;i<num;i++)
        {
            x = i +1;
            System.out.println("\n"+x+").");
            System.out.print("\n Book : ");
            String tex =sc.next();
            System.out.print("\n Publisher: ");
            String det =sc.next();

            arr[i]=new Literature(tex,det);
        }
        System.out.print("\nEnter the No. of Fiction Books : ");
        int num1 = sc1.nextInt();
        Fiction arr1[]=new Fiction[num1];
        System.out.print("\n Enter the Fiction Book Details : \n");
        int x1 = 0,j1=0;
        for(int i =0;i<num1;i++)
        {
            x1 = i +1;
            System.out.println("\n"+x1+").");
            System.out.print("\n Book : ");
            String tex =sc.next();
            System.out.print("\n Publisher: ");
            String det =sc.next();

            arr1[i]=new Fiction(tex,det);
        }
        sc.close();
        sc1.close();

        System.out.println("\n---Informations of all the Literature Books---");
        for(int i=0;i<num;i++){
            j=i+1;
            System.out.println("\n"+j+").");
            arr[i].display();

        }
        System.out.println("\n---Informations of all the Fiction Books---");
        for(int i=0;i<num1;i++){
            j1=i+1;
            System.out.println("\n"+j1+").");
            arr1[i].display();

        }
     sc1.close();
     }

    }
