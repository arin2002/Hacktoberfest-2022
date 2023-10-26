
ALPHABET_SIZE = 26
indexs = 0
class TrieNode:
    # constructor
    def __init__(self):
        self.isLeaf = False
        self.children = [None]*ALPHABET_SIZE
  

def insert(key, root):
    pCrawl = root
    for level in range(len(key)):
        index = ord(key[level]) - ord('a')
        if pCrawl.children[index] == None:
            pCrawl.children[index] = TrieNode()
        pCrawl = pCrawl.children[index]
    pCrawl.isLeaf = True
  

def constructTrie(arr, n, root):
    for i in range(n):
        insert(arr[i], root)
 
def countChildren(node):
    count = 0
    for i in range(ALPHABET_SIZE):
        if node.children[i] != None:
            count +=1
            # Keeping track of diversion in the trie
            global indexs
            indexs = i
    return count
      

def walkTrie(root):
    pCrawl = root
    prefix = ""
    while(countChildren(pCrawl) == 1 and pCrawl.isLeaf == False):
        pCrawl = pCrawl.children[indexs]
        prefix += chr(97 + indexs)
    return prefix or -1
  

def commonPrefix(arr, n, root):
    constructTrie(arr, n, root)
    return walkTrie(root)
  

n = 4
arr = ["geeksforgeeks", "geeks", "geek", "geezer"]
root = TrieNode()
print(commonPrefix(arr,n, root))
  
