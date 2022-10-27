fun main(args: Array<String>) {
    val a = true
    val b = false
    var result: Boolean

    result = a or b // a.or(b)
    println("result = $result")

    result = a and b // a.and(b)
    println("result = $result")
}
