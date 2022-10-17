import java.util.Arrays;

public class EggDroppingPuzzle {
	static final int MAX_Value = 1000;

	static int[][] memoiz = new int[MAX_Value][MAX_Value];

	static int solveEggDrop(int n, int k)
	{

		if (memoiz[n][k] != -1) {
			return memoiz[n][k];
		}

		if (k == 1 || k == 0)
			return k;

		if (n == 1)
			return k;

		int min = Integer.MAX_VALUE, x, res;

		for (x = 1; x <= k; x++) {
			res = Math.max(solveEggDrop(n - 1, x - 1),
						solveEggDrop(n, k - x));
			if (res < min)
				min = res;
		}

		memoiz[n][k] = min + 1;
		return min + 1;
	}

	public static void main(String[] args)
	{
		for (int i = 0; i < memoiz.length; i++)
			Arrays.fill(memoiz[i], -1);
		int n = 2, k = 36;
		System.out.print(solveEggDrop(n, k));
	}
}


