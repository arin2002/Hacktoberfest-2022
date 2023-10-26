using System;
					
public class Program
{
	public static void Main()
	{
	  //guess day from Question	
		int[,] questionList = new int[,]
		{
			{1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31},
			{2,3,6,7,10,11,14,15,18,19,22,23,26,27,30,31},
			{4,5,6,7,12,13,14,15,20,21,22,23,28,29,30,31},
			{8,9,10,11,12,13,14,15,24,25,26,27,28,29,30,31},
			{16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31}
		};
		
		int[] selectionList = new int[5]{0,0,0,0,0};
		
		Console.WriteLine("Welcome to Day of your Birthday Program !!");
		for(int index = 0; index<selectionList.Length;index++){
		try{
			int column = 0;
			for(int idx =0; idx < questionList.GetLength(1);idx++){
				if(column<4){
					Console.Write(questionList[index,idx]+"\t");
				}
				else{
					Console.WriteLine(questionList[index,idx]+"\t");
					column = 0;
				}
				column++;
			}	
			Console.WriteLine("\n\nHave your day of birthday ??");
			Console.WriteLine("1.Yes 2.No");
			int answer = Convert.ToInt32(Console.ReadLine()); 
			if(answer== 1 || answer==2){
				if(answer == 1 ){
					selectionList[index] = questionList[index,0];
				}
			}
			else{
				throw new Exception();
			}
			Console.WriteLine("");
		}
			catch{
				Console.WriteLine("answer is wrong try again\n");
				index--;
			}
		}
		int birthDay = 0;
		foreach(var number in selectionList){
			birthDay+=number;
		}
		Console.WriteLine("Your day of birthday is : "+birthDay);
    Console.ReadLine(); 
	}
}
