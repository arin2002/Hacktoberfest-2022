using System;

namespace BubbleSort
{
    public class Sort
    {
        public static void Main(string[] args)
        {
            int[] array = { 88, 76, 12, 50, 100, 0, 1001 };
            int temp;
            for (int j = 0; j <= array.Length - 2; j++)
            {
                for (int i = 0; i <= array.Length - 2; i++)
                {
                    if (array[i] > array[i + 1])
                    {
                        temp = array[i + 1];
                        array[i + 1] = array[i];
                        array[i] = temp;
                    }
                }
            }

            Console.WriteLine("Sorted: ");
            foreach (int q in array)
            {
                Console.Write(q + " ");
            }
            Console.ReadLine();
        }
    }
}