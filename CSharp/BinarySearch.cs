using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace BinarySearch
{
    class Program
    {
        static void Main(string[] args)
        {
            var arr = new int[10] { 4, 6, 15, 45, 55, 69, 89, 120, 145, 166 };

            Console.WriteLine(BinarySearch(arr, 55)); // true
            Console.WriteLine(BinarySearch(arr, 200)); // false

            Console.ReadKey();
        }

        public static bool BinarySearch(int[] arr, int item)
        {
            var low = 0;
            var high = arr.Length - 1;

            while (low <= high)
            {
                var mid = (low + high)/2;
                if (arr[mid] == item)
                    return true;
                if (item < arr[mid])
                    high = mid - 1;
                else
                    low = mid + 1;
            }

            return false;
        }
    }
}
