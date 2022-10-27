def palindrome(s):
    if len(s) == 0 or len(s) == 1:
        return True
    smallOutput = palindrome(s[1:len(s)-1])
    if smallOutput :
        return s[0] == s[-1]
    return False

s = input()
if palindrome(s):
    print('true')
else:
    print('false')
