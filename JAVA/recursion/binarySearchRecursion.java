public class binarySearchRecursion {
    public static void main(String[] args) {
        int[] arr = {1, 3, 6, 8, 9, 12, 15, 18, 19, 26, 28, 36, 39, 42, 46, 48, 53, 55, 58, 61, 66, 69};
        int target = 36;
        System.out.println(search(arr, target, 0, arr.length - 1));
    }

    static int search(int[] arr, int target, int s, int e) {
        if (s > e) {
            return -1;
        }
        int m = s + (e - s) / 2;
        if (arr[m] == target) {
            return m;
        }
        if (arr[m] > target) {
            return search(arr, target, s, m - 1);
        }
        return search(arr, target, m + 1, e);
    }
}
