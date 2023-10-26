import java.util.ArrayList;
import java.util.Scanner;

class Powerset {
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    String s = sc.next();
    ArrayList<String> powerset = power(s);
    System.out.println(powerset.toString());
    sc.close();
  }

  static ArrayList<String> power(String str) {
    if (str.length() == 0) {
      ArrayList<String> empty = new ArrayList<String>();
      empty.add("");
      return empty;
    }
    char cc = str.charAt(0);
    String strnext = str.substring(1);
    ArrayList<String> next = power(strnext);
    ArrayList<String> result = new ArrayList<String>();
    for (int i = 0; i < next.size(); i++) {
      result.add(next.get(i));
      result.add(cc + next.get(i));
    }
    return result;
  }
}