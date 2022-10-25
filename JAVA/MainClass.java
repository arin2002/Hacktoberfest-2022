package avl;

public class MainClass {

	public static void main(String[] args) {
	
		AVLTree tree = new AVLTree ();
		tree.insert(14);
		tree.insert(17);
		tree.insert(11);
		tree.insert(7);
		tree.insert(53);
		tree.insert(4);
		tree.insert(13);
		tree.insert(12);
		tree.insert(8);
		tree.insert(60);
		tree.insert(19);
		tree.insert(16);
		tree.insert(20);
		
		tree.delete(8);
		tree.delete(7);
		tree.delete(11);
		tree.delete(14);
		tree.delete(17);
		
		tree.display();
	}

}
