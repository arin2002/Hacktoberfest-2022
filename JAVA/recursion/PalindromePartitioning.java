class Solution {
    public List<List<String>> partition(String s) {
        List<List<String>> list = new ArrayList <>();
        List <String> ans = new ArrayList<>();
        partition(s, ans, list);
        return list;
    }
    
    static void partition(String ques, List<String> ans, List<List<String>> list) {

        if(ques.length() == 0) {
            list.add(new ArrayList<>(ans));
            return;
        }

        for(int i=1 ; i<=ques.length(); i++) {
            String nq = ques.substring(i);
            String comp = ques.substring(0,i);
            
            if(palindrome(comp)) {
                ans.add(comp);
                partition(nq, ans, list);
                ans.remove(ans.size()-1);
            }
            
        }
    } 
    
    static boolean palindrome(String str) {
        int i = 0;
        int j = str.length() - 1;

        while(i < j) {
            if(str.charAt(i) != str.charAt(j)) {
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }
}
