using System;
public class IsPalindrome
{
public static void Main(string[] args)
{
int no,total=0,t,rev;
Console.Write("Please provide the no: ");
no = int.Parse(Console.ReadLine());
t=no;
while(no>0)
{
rev=no%10;
total=(total*10)+rev;
no=no/10;
}
if(t==total)
Console.Write("The given number is Palindrome.");
else
Console.Write("The given number is not Palindrome");
}
}
