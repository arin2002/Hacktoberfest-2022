import java.io.*;
class Tax
{
public static void main()throws IOException
{
BufferedReader rl=new BufferedReader(new InputStreamReader(System.in));
System.out.println("________________Sales Tax/VAT__________________");
System.out.println("Select the type of tax:-");
System.out.println("1.Sales Tax");
System.out.println("2.VAT");
int ch=Integer.parseInt(rl.readLine());
switch(ch)
{
case 1:
System.out.print("Enter the price asked for:-");
double ap=Double.parseDouble(rl.readLine());
System.out.print("Enter tax rate:-");
double r=Double.parseDouble(rl.readLine());
System.out.println("The tax amount = "+((r/100)*ap));
System.out.println("The selling price = "+(ap+((r/100)*ap)));
break;
case 2:
System.out.print("Enter price paid:-");
double pp=Double.parseDouble(rl.readLine());
System.out.print("Enter price got:-");
double pg=Double.parseDouble(rl.readLine());
System.out.print("Enter tax rate:-");
r=Double.parseDouble(rl.readLine());
System.out.println("Input tax = "+((r/100)*pp));
System.out.println("Output tax = "+((r/100)*pg));
System.out.println("VAT = "+(((r/100)*pg)-((r/100)*pp)));
break;
default:
System.out.println("Wrong choice!!!!!!!!");
}
System.out.println("To use again press 1.To exit press 5.");
if(Integer.parseInt(rl.readLine())==1)main();
else
System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
}
