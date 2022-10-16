public class SlidingWindow {

    public static void main(String[] args) {
        int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
        int k = 4;
        int n = arr.length;
        System.out.println(maxSumSlidingWindow(arr, n, k));
    }

    private static int maxSumBruteForce(int[] arr, int n, int k) {

        int max_sum = 0;

        //Time complexity O(n*k)
        for (int i = 0; i < n - k + 1; i++) {
            int crr_sum = 0;
            for (int j = 0; j < k; j++) {
                crr_sum += arr[i + j];

                max_sum = Math.max(crr_sum, max_sum);
            }
        }
        return max_sum;
    }

    //Time complexity O(n)
    private static int maxSumSlidingWindow(int[] arr, int n, int k) {
        int curr_sum = 0;
        int max_sum = 0;
        for (int i = 0; i < k; i++)
            curr_sum += arr[i];
        max_sum = curr_sum;
        for (int j = k; j < n; j++) {
            curr_sum = curr_sum + arr[j] - arr[j - k];
            max_sum = Math.max(curr_sum, max_sum);
        }
        return max_sum;
    }
}
