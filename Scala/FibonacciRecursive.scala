object Fibonacci {
    def fibonacci(n: Int, a: Int=0, b: Int=1): Unit = {
        if(n >= 0) {
            print(a + " ")
            fibonacci(n-1, b, a+b)
        } else println()
    }

    def main(args: Array[String]): Unit = {
        print("Enter a number : ");
        val n = scala.io.StdIn.readInt();
        fibonacci(n)
    }
}