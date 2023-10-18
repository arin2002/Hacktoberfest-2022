package com.example.helloworld
fun main(args:Array<String>){
    val listofnames=listOf<String>("Hello","world","this is","og")
    //initialising with data variable a better practice but optional
    //list are immutable(cant be changed or upgraded) by default
    //for making it mutable
    var mutableListOfNames = mutableListOf<String>("I", "Love", "Ma")
    mutableListOfNames.add("So much")
    println(mutableListOfNames)
    for(i in listofnames){
        print("$i\n")
    }
}
