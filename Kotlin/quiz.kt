package com.example.helloworld
open class Quizdata(var ques1:String,var ans1:String){
    var ques=ques1
    var ans=ans1
    fun show(){
        print("Answer: ")
        var sol:String= readLine().toString()
        comp(sol)
    }
    fun comp(sol:String){
        if(sol!=ans){
            println("Wrong Answer")
        }
        else{
            println("Right Answer")
        }
    }
}
fun main(){
    var q1="What's the Coder's name?"
    var q2="How many planets are there in the "
    var q3="What is our planet called"
    println(q1)
    var a=Quizdata(q1,"aditya")
    a.show()
    println(q2)
    var b=Quizdata(q2,"8")
    b.show()
    println(q3)
    var c=Quizdata("What is our planet called","earth")
    c.show()

}