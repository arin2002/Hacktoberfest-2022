object PrimeRecursive {
    def prime(n: Int, i: Int=2): Boolean = {
        n match {
            case 1 => true
            case _ => if (i > n/2) true else if (n % i == 0) false else prime(n, i+1)
        }
    }
    
    def main(args: Array[String]) : Unit = {
        print("Enter a number : ");
        val n = scala.io.StdIn.readInt();
        println("N is prime: " + prime(n));
    }
}
