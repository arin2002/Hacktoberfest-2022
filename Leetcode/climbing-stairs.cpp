class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        array=[]; 
        for x in range(n+1):
            array.append(0)
        array[0] =0
        array[1]=1
        if(n<2):
            return array[n]
        array[2]=2
        for x in range(3, n+1):
            array[x] = array[x-1] + array[x-2]
        
        return array[n]
