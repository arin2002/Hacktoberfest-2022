public static int swapBits(int n) {
	    //0xAAAAAAAA means 10101010101010101010101010101010 in binary
	    //we get all even bits of n.
	    int ev=n & 0xAAAAAAAA;
	    //0x55555555 means 01010101010101010101010101010101 in binary.
	    //we get all odd bits of n.
	    int od=n & 0x55555555; 
	    
	    //right Shifting the even bits obtained previously.
	    ev>>=1;
	    //left Shifting the even bits obtained previously.
	    od<<=1;
	    
	    //doing bitwise OR of even and odd bits obtained and
	    //returning the final result.
	    return (ev | od); 
	    
}
