//Check whether number is palindrome or not.
public class Palindrome {
	public static void main(String args[]){  
		  int r,sum=0,temp;    
		  int num=454;  
		  
		  temp=num;    
		  while(num>0){    
		   r=num%10;    
		   sum=(sum*10)+r;    
		   num=num/10;    
		  }    
		  if(temp==sum)    
		   System.out.println("Palindrome number ");    
		  else    
		   System.out.println("Not Palindrome");    
		}  
}
