public class ArmstrongNumber {
	public static void main(String[] args)
	{

		int num = 153;
		int temp = num;
		int p = 0;

		while (num > 0) {

			int r = num % 10;
			p = (p) + (r * r * r);
			num = num / 10;
		}

		if (temp == p) {
			System.out.println("Yes. It is Armstrong No.");
		}
		else {
			System.out.println(
				"No. It is not an Armstrong No.");
		}
	}
}
