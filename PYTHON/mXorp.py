 class for the basic Trie Node
class TrieNode:
    def __init__(self):
 
      
        self.child = [None]*2
 
      
        self.value = None
 
class Trie:
 
    def __init__(self):
      
        self.root = self.getNode()
 
    def getNode(self):
     
        return TrieNode()
 
  
    def insert(self,key):
        temp = self.root
  
     
        for i in range(31,-1,-1):
 
          
            curr = (key>>i)&(1)
 
           
            if(temp.child[curr] is None):
                temp.child[curr] = self.getNode()
            temp = temp.child[curr]
 
      
        temp.value = key
 
   
    def xorUtil(self,key):
        temp = self.root
 
       
        for i in range(31,-1,-1):
 
          
            curr = (key>>i)&1
 
           
            if(temp.child[curr] is not None):
                temp = temp.child[curr]
 
          
            else if(temp.child[1-curr] is not None):
                temp = temp.child[1-curr]
 
        
        return temp.value^key
             
         
def minXor(arr):
 
        m = 2**30
 
      
        trie = Trie()
 
        trie.insert(arr[0])
 
        
        for i in range(1,len(arr)):
 
            
            m = min(m,trie.xorUtil(arr[i]))
             
           
            trie.insert(arr[i])
        return m
 

if __name__=="__main__":
    sample = [9,5,3]
    print(minXor(sample))
 
