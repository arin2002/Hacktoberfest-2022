public class KnapSack {

	static int maxVal(int x, int y)
	{
		return (x > y) ? x : y;
	}

	static int knapSack(int W, int wt[],
		int value[], int l)
	{
		int i, w;
		int Ks[][] = new int[l + 1][W + 1];

		for (i = 0; i <= l; i++)
		{
			for (w = 0; w <= W; w++)
			{
				if (i == 0 || w == 0)
					Ks[i][w] = 0;
				else if (wt[i - 1] <= w)
					Ks[i][w]
						= maxVal(value[i - 1]
						+ Ks[i - 1][w - wt[i - 1]],
						Ks[i - 1][w]);
				else
					Ks[i][w] = Ks[i - 1][w];
			}
		}

		return Ks[l][W];
	}

	public static void main(String args[])
	{
		int value1[] = new int[] { 60, 100, 120 };
		int weight[] = new int[] { 10, 20, 30 };
		int W = 50;
		int l = value1.length;
		System.out.println(knapSack(W, weight, value1, l));
	}
}

