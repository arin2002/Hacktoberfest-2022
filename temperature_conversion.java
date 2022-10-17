import java.io.*;
class TempConvert
{
public static void main()throws IOException
{
BufferedReader rl=new BufferedReader(new InputStreamReader(System.in));
System.out.println("_____________Temperature Conversion____________");
System.out.println("Select one of the criteria:-");
System.out.println("1.Fahrenheit to celsius:-");
System.out.println("2.Celsius to fahrenheit:-");
int ch=Integer.parseInt(rl.readLine());
double F,C;
switch(ch)
{
case 1:
System.out.print("Enter temperature:-");
F=Double.parseDouble(rl.readLine());
System.out.println(F+"F = "+((F-32)*(double)5/9)+"C");
break;
case 2:
System.out.print("Enter temperature:-");
C=Double.parseDouble(rl.readLine());
System.out.println(C+"C = "+((double)9/5*C+32)+"F");
break;
}
System.out.println("To use again press 1.To exit press 5.");
if(Integer.parseInt(rl.readLine())==1)main();
else
System.out.println("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}
}
