object Recusrive{
    def sum(n: Int, total: Int=0): Int = {
        n match {
            case 0 => return total;
            case _ => sum(n-1, total+n);
        }
    }
    def main(args: Array[String]): Unit = {
        print("Enter a number : ");
        val n = scala.io.StdIn.readInt();
        println("Sum : " + sum(n));
    }
}