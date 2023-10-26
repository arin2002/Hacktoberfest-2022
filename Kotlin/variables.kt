package com.example.helloworld
//another way of writing main function
const val Pi=3.14
fun main(args: Array<String>){
    var x="Hello"
    var y=120;
    val z=y+121;
    //var - mutable, can be modified
    //val - immutable, can not be modified
    println(x+" , "+y+" , "+z+" , "+(y+z))
    // alternate way to write the above
    // print("$a , $b , $c")

    val a: Int = 1  // immediate assignment
    val b = 2   // `Int` type is inferred
    val c: Int  // Type required when no initializer is provided
    c = 3       // deferred assignment
    println("a = $a, b = $b, c = $c")
    println("GLobal Variable Pi: "+Pi)
}