package com.example.helloworld

fun main(args:Array<String>){
    val names=listOf("Adi","Nandi","Ma")
    println("The size of the list is ${names.size}")//braces required in in built functions like these
    println("The second item in the list is: ${names.get(1)}")
    println("The third item in the list using index operator is: ${names[2]}")
    println("Adi is at the index ${names.indexOf("Adi")} in the list")
    val namess=mutableListOf<String>("Aditya","Kartik","Gamma","Sai")
    namess.add("Awara")
    for(i in 0..namess.size-1){
         print("${namess[i]}, ")
    }
    println("\n$namess")//alternate way to print a list
    namess.removeAt(2)
    println("After index 2 removed:$namess")
    namess.remove("Sai")
    println("Sai removed: $namess")
    namess.set(0,"Aryan")
    println("Aryan added at index 0 : $namess and replaced Aditya")
    namess[2]="Anushk"
    println("Anushk added to index 2: $namess and replaced Awara")
    namess.clear()
    println("The list is cleared: $namess")

}