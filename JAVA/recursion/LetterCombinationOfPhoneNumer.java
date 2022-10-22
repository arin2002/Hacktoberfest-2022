public class Main {
    public static void main(String args[]) {
        letterCombination("23", "");
    }

    static void letterCombination(String ques, String ans) {

        if(ques.length() == 0) {
            System.out.println(ans);
            return;
        }

        char c = ques.charAt(0);
        String nq = ques.substring(1);

        String code = getCode(c);

        for(int i=0; i<code.length(); i++) {
            letterCombination(nq, ans + code.charAt(i));
        }
    }

    static String getCode(char c) {
        if(c == '2') return "abc";
        else if(c == '3') return "def";
        else if(c == '4') return "ghi";
        else if(c == '5') return "jkl";
        else if(c == '6') return "mno";
        else if(c == '7') return "pqrs";
        else if(c == '8') return "tuv";
        else if(c == '9') return "wxyz";
        else return "";
    }


}