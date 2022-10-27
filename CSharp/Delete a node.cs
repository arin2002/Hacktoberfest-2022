using System;
using System.Collections;
using System.Collections.Generic;
  
class delete {

    public static void Main()
    {
        
        LinkedList<int> myList = new LinkedList<int>();
        myList.AddLast(2);
        myList.AddLast(4);
        myList.AddLast(6);
        myList.AddLast(8);
        Console.WriteLine("Total nodes in myList are : " + myList.Count);

        foreach(int i in myList)
        {
            Console.WriteLine(i);
        }
        
        myList.Remove(myList.First);
        Console.WriteLine("Total nodes in myList are : " + myList.Count);

        foreach(int i in myList)
        {
            Console.WriteLine(i);
        }
    }
}