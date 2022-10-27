package functions;

public class intro_array {

	public static void main(String[] args) {
		int[] marks;
		marks= new int [5];
		
		
		/* 
		 * the above statements can also be written as a single statement
		 *  in which we declare and allocate at the same time
		 *  
		 * int[] marks= new int[5]; 
		 *  
		 *  */
		
		marks[0]=1;
		marks[1]=2;
		marks[2]=3;
		marks[3]=4;
		marks[4]=5;
		
		
		for(int i=0; i<marks.length;i++)
		{
			System.out.println(marks[i]);
		}

	}

}
