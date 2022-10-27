	class Point {
	int x;int y;
	void setPoint(int a,int b) {
		x=a;
		y=b;}
	
	void showPoint() { 
		System.out.println("The coordinates = ("+x+","+y+")");}
		
		
	int findDistance(Point p) {
		int distance =(int)Math.sqrt(Math.pow(p.x-this.x,2)+Math.pow(p.y-this.y,2));
		return distance;}}
		


	public class PointDemo {

	public static void main(String[] args) {
		
		Point A=new Point();
		A.setPoint(5,1);
		A.showPoint();
		
		Point B=new Point();
		B.setPoint(2,7);
		B.showPoint();
		
		System.out.println("Distance between p1 and p2 = "+A.findDistance(B));
		
	}

}
