object PrimeSequence {
    def primeSeq(n: Int): Unit = {
        PrimeRecursive.prime(n) match {
            case true => print(n + ", ")
            case false => PrimeRecursive.prime(n-1)
        }
        if (n > 2) {
            primeSeq(n-1);
        }
    }
    def main(args: Array[String]) : Unit = {
        print("Enter a number :");
        val n = scala.io.StdIn.readInt();
        primeSeq(n);
        println();
    }
}