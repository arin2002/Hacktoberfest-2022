static boolean areRotations(String str1, String str2)  {  
        return (str1.length() == str2.length()) && ((str1 + str1).indexOf(str2) != -1); 
}
