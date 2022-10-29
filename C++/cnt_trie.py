#  implementation to count words in a trie

from pickle import NONE
 
ALPHABET_SIZE = 26
 
# Trie node
class TrieNode:
         
    def __init__(self):
        # isLeaf is true if the node represents
        # end of a word
        self.isLeaf = False
        self.children = [None for i in range(ALPHABET_SIZE)]
     
 
root = TrieNode()
         

def insert(key):
 
    length = len(key)
     
    pCrawl = root
     
    for level in range(length):
 
        index = ord(key[level]) - ord('a')
        if (pCrawl.children[index] == None):
            pCrawl.children[index] = TrieNode()
         
        pCrawl = pCrawl.children[index]
         
    # mark last node as leaf
    pCrawl.isLeaf = True
 
     

def wordCount(root):
 
    result = 0
     
    # Leaf denotes end of a word
    if (root.isLeaf == True):
        result += 1
         
    for i in range(ALPHABET_SIZE):   
        if (root.children[i] != None):
            result += wordCount(root.children[i])
         
    return result
     

keys = ["the", "a", "there", "answer", "any", "by", "bye", "their"];
 
root = TrieNode()
 
# Construct Trie
for i in range(len(keys)):
    insert(keys[i])
     
print(wordCount(root))
 
