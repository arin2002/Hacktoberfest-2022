
import java.lang.*;
import java.util.*;

class anish{

static boolean findPair(int a[], int n, int z)
{
	
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
		
			if (i != j && a[i] + a[j] == z)
				return true;

	return false;
}


public static void main(String[] args)
{
	
	int a[] = { 1, -2, 1, 0, 5 };
	int z = 0;
	int n = a.length;
	
	if (findPair(a, n, z))
		System.out.println("True");
	else
		System.out.println("False");
}
}


