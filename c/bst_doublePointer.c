#include<stdio.h>
#include<stdlib.h>

typedef struct tree{
    struct tree *left;
    int data;
    struct tree *right;
}treetype;

treetype* create(int);
void insert(treetype**,treetype*);
void preorder(treetype*);
void inorder(treetype*);
void postorder(treetype*);
int count(treetype*);
int countLeafNode(treetype*);
void deletenode(treetype**,int,int*);
treetype* search(treetype*,int);

int main()
{
    int ch=1,x,op,c=0,key,del;
    treetype *root=NULL,*temp;

    do
    {
      printf("\nEnter\n1)Insert\n2)Preorder\n3)Inorder\n4)Postorder\n5)Count the nodes \n6)Search\n7)Count the leaf nodes\n8)Delete Node\n ");
      scanf("%d",&op);
      switch(op)
      {  
          case 1:
          printf("\nEnter the number you want to insert:");
          scanf("%d",&x);  
          temp=create(x);
          insert(&root,temp);
          break;
          
          case 2:
          preorder(root);
          break;

          case 3:
          inorder(root);
          break;

          case 4:
          postorder(root);
          break;
          
          case 5:
          c=count(root);
          printf("\nNumber of nodes:%d",c);
          break;

          case 6:
          printf("\nEnter the key to be searched:");
          scanf("%d",&key);

          treetype *t=search(root,key);
          if(t==NULL)
              printf("\nKey was not in the list");
          else
              printf("Key was  found at the node adderss:%x",t);
          
          break;

          case 7:
          c=countLeafNode(root);
          printf("\nNumber of leaf nodes are:%d",c);
          break;

          case 8:
          printf("\nEnter the key you want to delete:");
          scanf("%d",&key);

          deletenode(&root,key,&del);

          printf("\nThe modified tree is:");
          inorder(root);
          break;
          
      }    
      printf("\nDo you want to continue:");
      scanf("%d",&ch);
    } while (ch==1);
    
    return 0;
}

void insert(treetype **root,treetype* temp)
{
    if(*root==NULL)
    {
            *root=temp;
            return;
    }
    if(temp->data > (*root)->data)
    {
        insert(&((*root)->right),temp);     
    }
    else if(temp->data<(*root)->data)
    {
        insert(&((*root)->left),temp);
    }
}

treetype* create(int num)
{
    treetype *p=(treetype*)malloc(sizeof(treetype));
    if(p)
    {
        p->data=num;
        p->right=NULL;
        p->left=NULL;
        return p;
    }
}

void preorder(treetype *root)
{
    if(root==NULL)
    return;

    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(treetype* root)
{
    if(root==NULL)
    return;
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postorder(treetype* root)
{
    if(root==NULL)
    return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int count(treetype *root)
{
    if(root==NULL)
    return 0;
    
    return 1 + count(root->left) + count(root->right);
}

treetype *search(treetype *root,int key)
{
    if(root==NULL)
        return NULL;
    if(root->data==key)
        return root;
    else if(root->data>key)
        search(root->left,key);
    else 
        search(root->right,key);
}

int countLeafNode(treetype *root)
{
    if(root==NULL)
        return 0;

    else
    {
        if(root->left!=NULL && root->right!=NULL)
            return countLeafNode(root->left) + countLeafNode(root->right);
        else
            return 1;
    }
}

void deletenode(treetype **root,int key,int *del)
{
    if((*root)->data == key)
    {
        if((*root)->right == NULL)
        {
            treetype *p=*root;
            *root=(*root)->left;
            free(p);
            *del=1;

            return;
        }
        else if((*root)->left  == NULL)
        {
            treetype *p=*root;
            (*root)=(*root)->right;
            free(p);
            *del=1;

            return;
        }
        else
        {
            treetype *p=(*root)->right;
            while(p->left != NULL)
                p=p->left;
            (*root)->data=p->data;
            deletenode(&((*root)->right),p->data,del);
            *del=1;
            return;
        }
    }
    else if((*root)->data > key && (*root)->left !=NULL)
        deletenode(&((*root)->left),key,del);
    else if((*root)->data < key && (*root)->right !=NULL)
        deletenode(&((*root)->right),key,del);
    else
    {
        *del=0;
        return;
    }
}
