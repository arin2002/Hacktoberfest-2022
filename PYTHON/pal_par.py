
def isPalindrome(st):
 
    length = len(st)
 
  
    for i in range(length // 2):
        if (st[i] != st[length - i - 1]):
            return False
 
    return True
 
def checkPalindromePair(vect):
 

    for i in range(len(vect) - 1):
        for j in range(i + 1, len(vect)):
             
            check_str = vect[i] + vect[j]
 
            if (isPalindrome(check_str)):
                return True
 
           
            check_str = vect[j] + vect[i]
            if (isPalindrome(check_str)):
                return True
    return False
   
# Driver code
if __name__ == "__main__":
   
    vect = ["geekf", "geeks", "or",
            "keeg", "abc", "bc"]
     
    if checkPalindromePair(vect):
        print("Yes")
    else:
        print ("No")
   
