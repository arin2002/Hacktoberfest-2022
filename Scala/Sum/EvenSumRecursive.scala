object EvenSumRecursive {
    // Binary Recursion for even
    def isEven(n: Int): Boolean = {
        n match {
            case 0 => true;
            case _ => isOdd(n-1);
        }
    }
    def isOdd(n: Int): Boolean = !(isEven(n))

    // Recursive even sum
    def evenSum(n: Int, sum: Int=0): Int = {
        if (n == 0) return sum
        else if(isEven(n)) evenSum(n-1, sum+n);
        else evenSum(n-1, sum);
    }
    def main(args: Array[String]): Unit = {
        print("Enter a number : ");
        val n = scala.io.StdIn.readInt();
        println("Sum of even numbers: " + evenSum(n));
    }
}