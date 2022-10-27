#include <bits/stdc++.h>
using namespace std;

enum Color {RED,BLACK};  //define the color

struct Node
{
    int data;
    bool color;
    Node *left,*right,*parent;
    

    // constructor
    Node(int data){
        this->data=data;
        left=right=parent=NULL;
        this->color=RED;
    }
};

// Class to represent Red-Black Tree
class RBtree
{
    private:
    Node *root;
    protected:
    void LeftRotation(Node *&,Node *&);
    void RightRotation(Node *&,Node *&);
    void Fixvoilation(Node *&,Node *&);
    public:
    // constructor
    RBtree(){root=NULL;}
    void insert(const int &n);
    void inorder();
    };

    // A recursive function to do inorder traversal
void InorderTravel(Node *root)
{
	if (root == NULL)
		return;

	InorderTravel(root->left);
	cout << root->data << " ";
	InorderTravel(root->right);
}

// simple BST isnertion
Node* BSTinsert(Node *root,Node *pt){
    if(root==NULL){
        return pt;
    }
    if(root->data>pt->data){
        root->left=BSTinsert(root->left,pt);
        root->left->parent=root; //assiging the parent 
    }
    else if(root->data<pt->data){
        root->right=BSTinsert(root->right,pt);
        root->right->parent=root;
    }
    return root;
}
// rotation in left direction wrt to pointer pt
void RBtree::LeftRotation(Node *&root, Node *&pt)
{
	Node *pt_right = pt->right;

	pt->right = pt_right->left;

	if (pt->right != NULL)
		pt->right->parent = pt;

	pt_right->parent = pt->parent;

	if (pt->parent == NULL)
		root = pt_right;

	else if (pt == pt->parent->left)
		pt->parent->left = pt_right;

	else
		pt->parent->right = pt_right;

	pt_right->left = pt;
	pt->parent = pt_right;
}
// rotation in right direction wrt to pointer pt
void RBtree::RightRotation(Node *&root, Node *&pt)
{
	Node *pt_left = pt->left;

	pt->left = pt_left->right;

	if (pt->left != NULL)
		pt->left->parent = pt;

	pt_left->parent = pt->parent;

	if (pt->parent == NULL)
		root = pt_left;

	else if (pt == pt->parent->left)
		pt->parent->left = pt_left;

	else
		pt->parent->right = pt_left;

	pt_left->right = pt;
	pt->parent = pt_left;
}

// inbalance in rb tree due to insertion of red node
void RBtree::Fixvoilation(Node *&root, Node *&pt){
    Node *grand_parent_pt=NULL;
    Node *parent_pt=NULL;

    while((pt!=root) && (pt->color!=BLACK) && (pt->parent->color==RED)){
        grand_parent_pt=pt->parent->parent;
        parent_pt=pt->parent;

        /* Case : A
			Parent of pt is left child
			of Grand-parent of pt */
        if(parent_pt==grand_parent_pt->left){
            Node *uncle_pt=grand_parent_pt->right;

            /* Case : 1
			The uncle of pt is also red
			Only Recoloring required */
            if(uncle_pt!=NULL && uncle_pt->color==RED){
                uncle_pt->color=BLACK;
                parent_pt->color=BLACK;
                grand_parent_pt->color=RED;
                pt=grand_parent_pt;
            }
            else{
                /* Case : 2
				pt is right child of its parent
				Left-rotation required */
                if(pt==parent_pt->right){
                    LeftRotation(root,parent_pt);
                    pt=parent_pt;
                    parent_pt = pt->parent;
                }
                /* Case : 3
				pt is left child of its parent
				Right-rotation required */
                RightRotation(root,grand_parent_pt);
                swap(parent_pt->color,
						grand_parent_pt->color);
				pt = parent_pt;
            }
        }

        /* Case : B
		Parent of pt is right child
		of Grand-parent of pt */

        else{
            Node *uncle_pt=grand_parent_pt->left;

            /* Case : 1
				The uncle of pt is also red
				Only Recoloring required */
            if((uncle_pt!=NULL) && (uncle_pt->color==RED)){
                uncle_pt->color=BLACK;
                parent_pt->color=BLACK;
                grand_parent_pt->color=RED;
                pt=grand_parent_pt;
            }
            
            else{
                /* Case : 2
				pt is left child of its parent
				Right-rotation required */
                if(pt==parent_pt->left){
                    RightRotation(root,parent_pt);
                    pt=parent_pt;
                    parent_pt = pt->parent;
                }
                /* Case : 3
				pt is right child of its parent
				Left-rotation required */
                LeftRotation(root,grand_parent_pt);
                swap(parent_pt->color,
						grand_parent_pt->color);
				pt = parent_pt;
            }
        }
    }
	root->color = BLACK;
}
// Function to insert a new node with given data
void RBtree::insert(const int &data){
    Node *pt=new Node(data);

    root=BSTinsert(root,pt);

    Fixvoilation(root,pt);
}

void RBtree::inorder()	 { InorderTravel(root);}
int main()
{
	RBtree tree;

	tree.insert(7);
	tree.insert(6);
	tree.insert(5);
	tree.insert(4);
	tree.insert(3);
	tree.insert(2);
	tree.insert(1);

	cout << "Inorder Traversal of Created Tree\n";
	tree.inorder();
    return 0;}