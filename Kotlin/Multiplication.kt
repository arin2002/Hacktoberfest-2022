package com.example.helloworld

fun main(args:Array<String>){
    val num=Integer.valueOf(readLine())//for inputing
    for(i in 1..10){
        var mult=num*i
        println("$num x $i = $mult")
    }
}