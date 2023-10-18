package com.example.helloworld

fun main(){
    val classRanks=mapOf(1 to "Adi",2 to "Kartik",3 to "Anushk", 4 to "Isha")
    println("Students: ${classRanks.values}")
    println("Ranks: ${classRanks.keys}")
    println("Is there a student named Kartik: ${classRanks.containsValue("Kartik")}")
    println("Is there a 4th ranking? ${classRanks.containsKey(1)}")
    println("The student at 1st ranking is: ${classRanks.get(1)}")
    //for mutable maps:
    //classRanks.put(5 to "Nidhi") //to add
    //classRanks.remove(2)         //to remove
}