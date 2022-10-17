import java.io.*;
class DiscountMarkup
{
public static void main()throws IOException
{
BufferedReader rl=new BufferedReader(new InputStreamReader(System.in));
System.out.println("________________Discount/Markup________________");
System.out.print("Enter Marked Price:-");
double mp=Double.parseDouble(rl.readLine());
System.out.print("Enter Selling Price:-");
double sp=Double.parseDouble(rl.readLine());
if(mp>sp)
{
System.out.println("The discount = "+(mp-sp));
System.out.println("The discount% = "+((mp-sp)/mp*100)+"%");
}
if(sp>mp)
{
System.out.println("The markup = "+(sp-mp));
System.out.println("The markup% = "+((sp-mp)/mp*100)+"%");
}
if(mp==sp)
System.out.println("No discount.No markup.");
System.out.println("To use again press 1.To exit press 5.");
if(Integer.parseInt(rl.readLine())==1)main();
else
System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
}
