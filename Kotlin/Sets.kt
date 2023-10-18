package com.example.helloworld

fun main(){
    val names=setOf("Adi","Nandi","Ma","Saibaba")
    println("Size of set is: ${names.size}")
    println("Set contains Saibaba?(True=yes and False=no): ${names.contains("Saibaba")}")
    val namess=mutableSetOf<String>("Adi","Nandi","Ma")
    println(namess)
    namess.add("Saibaba")
    println(namess)
    namess.add("Gande")
    println(namess)
    namess.remove("Gande")
    println(namess)

}