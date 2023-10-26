class Solution {
    public boolean canReorderDoubled(int[] arr) {
        Map<Integer, Integer> map = new HashMap();
        for (int x: arr)
            map.put(x, map.getOrDefault(x, 0) + 1);

        Integer[] temp = new Integer[arr.length];
        for (int i = 0; i < arr.length; ++i)
            temp[i] = arr[i];
        
        Arrays.sort(temp, Comparator.comparingInt(Math::abs));

        for (int x: temp) {
            
            // If this can't be consumed, skip
            // This has been used for someone doubled value, bec we are reducing both x and 2*x
            if (map.get(x) == 0) continue;
            
            // If this doesn't have a doubled partner, the answer is false
            if (map.getOrDefault(2*x, 0) <= 0) return false;

            // Reduce x, 2*x
            map.put(x, map.get(x) - 1);
            map.put(2*x, map.get(2*x) - 1);
        }

        return true;
    }
}
