import java.io.*;
class ProfitLoss
{
public static void main()throws IOException
{
BufferedReader rl=new BufferedReader(new InputStreamReader(System.in));
System.out.println("__________________Profit/Loss__________________");
System.out.print("Enter Cost Price:-");
double cp=Double.parseDouble(rl.readLine());
System.out.print("Enter Selling Price:-");
double sp=Double.parseDouble(rl.readLine());
if(sp>cp)
{
System.out.println("The profit = "+(sp-cp));
System.out.println("The profit% = "+((sp-cp)/cp*100)+"%");
}
if(cp>sp)
{
System.out.println("The loss = "+(cp-sp));
System.out.println("The loss% = "+((cp-sp)/cp*100)+"%");
}
if(cp==sp)
System.out.println("No Profit.No Loss");
System.out.println("To use again press 1.To exit press 5.");
if(Integer.parseInt(rl.readLine())==1)main();
else
System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
}