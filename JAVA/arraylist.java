/* 

Example about how to use an ArrayList 

Written for Mario, see the related thread in the comment.

*/

import java.util.*;

public class ArrayListExample {

    public static void main(String[] args) {

         

       // no need to define the length as for a 

       // primitive array of strings

       List<String> list = new ArrayList<>();

       // just add as many elements as you like

       list.add("I");

       list.add("am");

       list.add("dynamic!");

       

       // or add all elements from another 

       // collection, here I am adding the same 

       // list again,because I am lazy

       list.addAll(list);

       

       // loop through the list to print all 

       // elements

       list.forEach(e ->System.out.println(e));

       

       // searching if a particular entry 

       // exists

       if (list.contains("I")) {

           System.out.println(Boolean.TRUE);

       }

       

       // now sorting the list

       list.sort(String.CASE_INSENSITIVE_ORDER);

       // print it sorted

       list.forEach(e ->System.out.println(e));

       

       // delete all elements in the list

       list.clear();

    }

}
