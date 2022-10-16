public class trappingRainwater{
    public static void trappedRainwater(int height[]){
        int n=height.length;
        // Calculate leftmax boundary
        int leftmax[]=new int[n];
        leftmax[0]=height[0];
        for(int i=1;i<n;i++){
            leftmax[i]=Math.max(height[i], leftmax[i-1]);
        }
        // Calculate rightmax boundary
        int rightmax[]=new int[n];
        rightmax[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            rightmax[i]=Math.max(height[i],rightmax[i+1]);
        }
        // loop
        int trappedWater=0;
        for(int i=0;i<n;i++){
            // water level = min(leftmax boundary.rightmax boundary)
            int waterLevel=Math.min(leftmax[i],rightmax[i]);
            // trapped water = (water level - height) * width; (Here, taking width=1)
            trappedWater+=(waterLevel-height[i]);
        }
        System.out.println("Total water trapped is: "+trappedWater);
    }
    public static void main(String args[]){
        int height[] = {4,2,0,6,3,2,5};
        trappedRainwater(height);
    }
}