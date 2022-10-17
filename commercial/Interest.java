import java.io.*;
class Interest
{
public static void main()throws IOException
{
BufferedReader rl=new BufferedReader(new InputStreamReader(System.in));
System.out.println("___________Simple/Compound Interest____________");
System.out.print("Enter Principal:-");
double p=Double.parseDouble(rl.readLine());
System.out.print("Enter rate(per annum):-");
double r=Double.parseDouble(rl.readLine());
System.out.print("Enter time(in years):-");
int t=Integer.parseInt(rl.readLine());
System.out.println("Select the type of interest:-");
System.out.println("1.Simple Interest");
System.out.println("2.Compound Interest");
int ch=Integer.parseInt(rl.readLine());
switch(ch)
{
case 1:
System.out.println("The simple interest = "+((p*r*t)/100));
System.out.println("The amount = "+(p+((p*r*t)/100)));
break;
case 2:
System.out.println("The compound interest = "+((p*Math.pow((1+r/100),t)-p)));
System.out.println("The amount = "+(p*Math.pow((1+r/100),t)));
break;
default:
System.out.println("Wrong choice!!!!!!!!!!");
}
System.out.println("To use again press 1.To exit press 5.");
if(Integer.parseInt(rl.readLine())==1)main();
else
System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
}
