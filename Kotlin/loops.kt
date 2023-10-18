package com.example.helloworld
fun main(){
    //2 versions of For Loop
    val items=listOf("apples","bananas","Mangoes")
    for(item in items){
        println(item)
    }
    //OR
    for(index in items.indices){
        println("item at $index is ${items[index]}")
    }
    //While Loop
    var index = 0
    println("While Loop\n")
    while (index < items.size) {
        println("item at $index is ${items[index]}")
        index++
    }
}
