object BinaryRecursion {
    def isEven(n: Int): Boolean = {
        n match {
            case 0 => true;
            case _ => isOdd(n-1);
        }
    }
    def isOdd(n: Int): Boolean = !(isEven(n))

    def main(args: Array[String]): Unit = {
        print("Enter a number : ");
        val n = scala.io.StdIn.readInt();
        println("Number is even: " + isEven(n));
    }
}