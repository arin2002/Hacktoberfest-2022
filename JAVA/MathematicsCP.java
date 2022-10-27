package mathematics;

import java.math.BigInteger;
import java.util.Arrays;

public class MathematicsCP {

	public static void main(String[] args) {
		
//		boolean isPrime[] = sieveOfEratoStenes(15); 
//		for(int i=0 ; i<=15 ; i++) {
//			System.out.println(i + " " + isPrime[i]);
//		}
		
//		System.out.println(gcd(24 , 60));
		
//		System.out.println(fastPow(40 , 4 , 1000000007)); ;
 
//		System.out.println(factorial(40));
		
		
//		BigInteger a, b;
//		a  = BigInteger.valueOf(54);
//		b  = BigInteger.valueOf(100);
//		
//		BigInteger c = a.add(b) ;
		
//		String s = "1245" ;
//		BigInteger d = new BigInteger(s);
				
//		System.out.println(s);
		
//		int x  = d.intValue();
//		String f = d.toString() ;
//		System.out.println(f) ;
		
//		if(d.compareTo(b) > 0) {
//			System.out.println("big");
//		}

//		System.out.println(d.bitCount());
//		System.out.println(d.bitLength());
//		long start = System.currentTimeMillis() ;
		System.out.println(catalanNumber(0));
//		long end = System.currentTimeMillis() ;
//		System.out.println(end-start);
		
//		System.out.println(binomialCoefficient(5, 3));
 	}
	
	static int catalanNumber ( int n ) {
		int res = 0 ;
		
		if(n <= 1) {
			return 1 ;
		}
		
		for(int i=0 ; i<n ; i++) {
			res += catalanNumber(i)*catalanNumber(n-i-1) ;
		}
		
		return res ;
	}
	
	static int binomialCoefficient (int n , int r) {
		int res = 1 ;
		
		if(r > n-r ){
			r = n - r ; 
		}
		
		for(int i=0 ; i<r ; i++) {
			res *= n-i ;
			res /= i+1 ;
		}
		
		return res ;
	}
	
	static BigInteger factorial(int n) {
		
		BigInteger f = new BigInteger ("1") ;
		
		for( int i=2 ; i<=n ; i++) {
			f = f.multiply(BigInteger.valueOf(i)) ;
		}
		
		return f ;
	}
	
	static long fastPow(long a , long b , int n) {
		long res = 1 ;
		
		while(b > 0 ) {
			
			if( (b&1) != 0) {
				res = (res % n * a % n ) % n ;
			}
			a = ( a % n * a % n ) % n ;
			b = b >> 1 ;
		}
		return res ;
	}
	
	static int gcd (int a , int b) {
		
		if( b == 0) return a ;
		
		return gcd(b , a % b ) ;
		
//		return a % b == 0 ? b : gcd ( b , a % b ) ;
	}
	
	static boolean[] sieveOfEratoStenes(int n) {
		boolean isPrime[] = new boolean [n+1] ;
		
		Arrays.fill(isPrime, true);
		
		isPrime[0] = false ;
		isPrime[1] = false ;
		
		for(int i=2 ; i*i<=n ; i++) {
			
			for(int j=i*2 ; j<=n ; j+=i ) {
				isPrime[j] = false ;
			}
		}
		return isPrime ;
	}

}
