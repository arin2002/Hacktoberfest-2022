package comparatorsAndComparables;

import java.util.*;

public class MainClass {

	public static void main(String[] args) {
		
		List <Student> students = new ArrayList<>();
		
			students.add(new Student(10 , "Thor"));
			students.add(new Student(20 , "Fury"));
			students.add(new Student(43 , "Thanos"));
			students.add(new Student(10 , "Tony"));
			students.add(new Student(78 , "Tony"));
			
			
//			Collections.sort(students);
			
//			Collections.sort(students , new SortByNameThenMarks());
			
//			Collections.sort(students , new Comparator<Student>() {
//				@Override
//				public int compare(Student o1, Student o2) {
//					if(o1.name.equals(o2.name)) {
//						return o1.marks - o2.marks ;
//					} else {
//						return o1.name.compareTo(o2.name);
//					}
//				}
//			});
			
//			Collections.sort(students , (Student o1, Student o2) ->{
//					if(o1.name.equals(o2.name)) {
//						return o1.marks - o2.marks ;
//					} else {
//						return o1.name.compareTo(o2.name);
//					}
//				});
			
//			Collections.sort(students , (o1 , o2) -> o1.name.compareTo(o2.name)) ;
			
			Collections.sort(students , Comparator.comparing(Student::getName).thenComparing(Student::getMarks).reversed());
			
			students.forEach(System.out::println);
			
	//		The above is same as the below one 
//			for(int i=0 ; i<students.size() ; i++) {
//				System.out.println(students.get(i));
//			}
		}
	}
	
class SortByNameThenMarks implements Comparator <Student>{
	
	@Override
	public int compare(Student o1, Student o2) {
		if(o1.name.equals(o2.name)) {
			return o1.marks - o2.marks ;
		} else {
			return o1.name.compareTo(o2.name);
		}
	}
}

