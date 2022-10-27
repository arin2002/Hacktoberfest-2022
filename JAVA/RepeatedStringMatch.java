static int repeatedStringMatch(String a, String b) {
    int ans = 1; 
  String s = a; 

  while(s.length() < b.length()) 
  { 
    s += a; 
    ans++; 
  } 

  if (substring(s, b)) return ans; 
  if (substring(s+a, b)) 
    return ans + 1; 
  return -1;
} 

static boolean substring(String a, String b) {
    int t = 0;
    int l = a.length();
    int i;
    for(i=0; i<l; i++) {

        if(t == b.length()) break;

        if(a.charAt(i) == b.charAt(t)) t++;
        else t = 0;
    }

    return t < b.length() ? false : true;
}

static boolean issubstring(String str2, String rep1) 
// 	{ 
// 		int M = str2.length(); 
// 		int N = rep1.length(); 

// 		for (int i = 0; i <= N - M; i++) { 
// 			int j; 
// 			for (j = 0; j < M; j++) 
// 				if (rep1.charAt(i + j) != str2.charAt(j)) 
// 					break; 
// 			if (j == M) 
// 				return true; 
// 		}
// 		return false; 
// 	} 

// 	static int repeatedStringMatch(String A, String B) 
// 	{ 
// 		int ans = 1; 
// 		String S = A; 

// 		while(S.length() < B.length()) {
// 		    S += A; 
// 			ans++; 
// 		} 

// 		if (issubstring(B, S)) return ans; 
// 		if (issubstring(B, S + A)) 
// 			return ans + 1; 
// 		return -1; 
// 	} 
