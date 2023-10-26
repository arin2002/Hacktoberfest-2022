'''Python program to insert
   a node in AVL tree 
   (this is a binary tree which has the balance property)
'''

class TreeNode(object):
	def __init__(self, val):
		self.val = val
		self.left = None
		self.right = None
		self.height = 1


class AVL_Tree(object):


	def insert(self, root, key):
	

		if not root:
			return TreeNode(key)
		elif key < root.val:
			root.left = self.insert(root.left, key)
		else:
			root.right = self.insert(root.right, key)

		root.height = 1 + max(self.getHeight(root.left),
						self.getHeight(root.right))

		balance = self.getBalance(root)


		if balance > 1 and key < root.left.val:
			return self.rightRotate(root)

		if balance < -1 and key > root.right.val:
			return self.leftRotate(root)

		if balance > 1 and key > root.left.val:
			root.left = self.leftRotate(root.left)
			return self.rightRotate(root)

		if balance < -1 and key < root.right.val:
			root.right = self.rightRotate(root.right)
			return self.leftRotate(root)

		return root

	def leftRotate(self, z):

		y = z.right
		T2 = y.left

		y.left = z
		z.right = T2

		z.height = 1 + max(self.getHeight(z.left),
						self.getHeight(z.right))
		y.height = 1 + max(self.getHeight(y.left),
						self.getHeight(y.right))

		return y

	def rightRotate(self, z):

		y = z.left
		T3 = y.right


		y.right = z
		z.left = T3


		z.height = 1 + max(self.getHeight(z.left),
						self.getHeight(z.right))
		y.height = 1 + max(self.getHeight(y.left),
						self.getHeight(y.right))

		return y

	def getHeight(self, root):
		if not root:
			return 0

		return root.height

	def getBalance(self, root):
		if not root:
			return 0

		return self.getHeight(root.left) - self.getHeight(root.right)

	def preOrder(self, root):

		if not root:
			return

		print("{0} ".format(root.val), end="")
		self.preOrder(root.left)
		self.preOrder(root.right)


myTree = AVL_Tree()
root = None

root = myTree.insert(root, 100)
root = myTree.insert(root, 200)
root = myTree.insert(root, 300)
root = myTree.insert(root, 400)
root = myTree.insert(root, 500)
root = myTree.insert(root, 250)


print("Preorder traversal of the",
	"constructed AVL tree is")
myTree.preOrder(root)
print()
