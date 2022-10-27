using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

class Solution {
    static void Main(String[] args) {
        int K = Console.ReadLine().Split(' ').Select(Int32.Parse).ToArray()[1];
        
        List<int> ItemList = Console.ReadLine().Split(' ').Select(Int32.Parse).ToList();
        long CorrectTotal = (ItemList.Sum(m => m) - ItemList[K]) / 2;
        long AmountCharged = Convert.ToUInt32(Console.ReadLine());
        
        if (CorrectTotal == AmountCharged)
            Console.WriteLine("Bon Appetit");
        else {
            Console.WriteLine(AmountCharged - CorrectTotal);
        }
    }
}