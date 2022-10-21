# Function to segment given string into a space-separated
# sequence of one or more dictionary words
def wordBreak(words, word, out=''):
 
    # if the end of the string is reached,
    # print the output string
    if not word:
        print(out)
        return
 
    for i in range(1, len(word) + 1):
        # consider all prefixes of the current string
        prefix = word[:i]
 
        # if the prefix is present in the dictionary, add it to the
        # output string and recur for the remaining string
        if prefix in words:
            wordBreak(words, word[i:], out + ' ' + prefix)
 
 
# Word Break Problem Implementation in Python
if __name__ == '__main__':
 
    # List of strings to represent a dictionary
    words = [
        'self', 'th', 'is', 'famous', 'Word', 'break', 'b', 'r',
        'e', 'a', 'k', 'br', 'bre', 'brea', 'ak', 'problem'
    ]
 
    # input string
    word = 'Wordbreakproblem'
 
    wordBreak(words, word)