using System;
using static System.Console;
using System.Collections.Generic;

class Solution
{
    static void Main(String[] args)
    {
        //No need to capture the size of array. I use array's length property instead.
        ReadLine();
        var ar_temp = ReadLine().Split(' ');
        var ar = Array.ConvertAll(ar_temp, int.Parse);
        var result = MigratoryBirds(ar);
        WriteLine(result);
    }

    static int MigratoryBirds(int[] ar)
    {
        var birdTypeCounts = new int[5];

        for (int i = 0; i < ar.Length; i++)
            birdTypeCounts[ar[i] - 1]++;

        var maxBirdTypeCount = birdTypeCounts[0];
        var maxBirdType = 1;

        for (int i = 1; i < 5; i++)
        {
            if (birdTypeCounts[i] > maxBirdTypeCount)
            {
                maxBirdTypeCount = birdTypeCounts[i];
                maxBirdType = i + 1;
            }

            if (birdTypeCounts[i] == maxBirdTypeCount && i + 1 < maxBirdType)
                maxBirdType = i + 1;
        }

        return maxBirdType;
    }
}