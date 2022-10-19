#include<stdio.h>
#include<stdlib.h>

/******************************************************************************************
                                STRUCTURE OF NODE
*******************************************************************************************/

struct node{
    struct node *left;
    struct node *right;
    int key;
    
};

/******************************************************************************************
                                CREATING A NEW NODE
*******************************************************************************************/

struct node *CreateNode(int key)
{
    struct node *newNode=(struct node *)malloc(sizeof(struct node));
    if(newNode==NULL)
    {
        printf("Error in creating new node!\n");
    }
    else{
        newNode->key=key;
        newNode->left=NULL;
        newNode->right=NULL;
    }
    
    return newNode;
}


/******************************************************************************************
                                INSERTION OF NODE
*******************************************************************************************/

//Recursive Approach
struct node *insert_recursive(struct node *root,struct node *Node)
{
    if(root==NULL)
    {
        return Node;
    }
    
    if(Node->key<root->key)
    {
        root->left=insert_recursive(root->left,Node);
    }
    else{
        root->right=insert_recursive(root->right,Node);
    }
    
    return root;
}


//Non-Recursive Approach
struct node *insert_non_recursive(struct node *root, struct node *Node)
{   
    if(root==NULL)
    {
        return Node;
    }
    
    struct node *temp=root;
    struct node *p=NULL;
    while(temp!=NULL)
    {   p=temp;
        
        if(Node->key<temp->key)
        {
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    
    if(Node->key<p->key)
    {
        p->left=Node;
    }
    else{
        p->right=Node;
    }
    
    return root;
}

/******************************************************************************************
                                INORDER TRAVERESAL
*******************************************************************************************/
void inOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    inOrder(root->left);
    printf("%d ", root->key);
    inOrder(root->right);
}

/******************************************************************************************
                                PREORDER TRAVERESAL
*******************************************************************************************/
void preOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    printf("%d ", root->key);
    preOrder(root->left);
    preOrder(root->right);
}

/******************************************************************************************
                                POSTORDER TRAVERESAL
*******************************************************************************************/
void postOrder(struct node *root)
{
    if(root==NULL)
    {
        return;
    }
    
    
    postOrder(root->left);
    postOrder(root->right);
    printf("%d ", root->key);
}


/******************************************************************************************
                                    SEARCHING
*******************************************************************************************/
struct node *search(struct node *root,int key)
{   
    if(root==NULL)
    {
        return NULL;
    }
    
    struct node *temp=root;
    while(temp!=NULL&&temp->key!=key)
    {
        if(key<temp->key)
        {
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    if(temp==NULL)
    {
        return NULL;
    }
    if(temp->key==key)
    {
        return temp;
    }
    else{
        
        return NULL;
    }   
}

/******************************************************************************************
                                MAXIMUM KEY
*******************************************************************************************/
struct node *maximum(struct node *s)
{   
    if(s==NULL)
    {
        return NULL;
    }
    struct node *temp=s;
    struct node *y=NULL;
    
    while(temp!=NULL)
    {
        y=temp;
        temp=temp->right;
    }
    
    return y;
}

/******************************************************************************************
                                MINIMUM KEY
*******************************************************************************************/
struct node *minimum(struct node *s)
{   
    if(s==NULL)
    {
        return NULL;
    }
    struct node *temp=s;
    struct node *y=NULL;
    
    while(temp!=NULL)
    {
        y=temp;
        temp=temp->left;
    }
    
    return y;
}

/******************************************************************************************
                                SUCCESSOR OF A NODE
*******************************************************************************************/
struct node *successor(struct node *root,struct node *s)
{   if(root==NULL)
    {
        return NULL;
    }
    if(s==NULL)
    {
        return NULL;
    }
    if(s->right!=NULL)
    {
        return minimum(s->right);
    }
    else{
        struct node *succ=NULL;
        struct node *temp=root;

        while(temp!=NULL)
        {
            if(s->key<temp->key)
            {
                succ=temp;
                temp=temp->left;
            }
            else if(s->key>temp->key)
            {
                temp=temp->right;
            }
            else{
                break;
            }
        }
        return succ;

    }
}

/******************************************************************************************
                                PREDECESSOR OF A NODE
*******************************************************************************************/
struct node *predecessor(struct node *root, struct node *s)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(s==NULL)
    {
        return NULL;
    }
    if(s->left!=NULL)
    {
        return maximum(s->left);
    }
    else{
        struct node *pred=NULL;
        struct node *temp=root;

        while(temp!=NULL)
        {
            if(s->key>temp->key)
            {
                pred=temp;
                temp=temp->right;
            }
            else if(s->key<temp->key){
                temp=temp->left;
            }
            else{
                break;
            }
        }

        return pred;
    }
}


/******************************************************************************************
                                HEIGHT OF A KEY
*******************************************************************************************/

int height(struct node *s)
{
    if(s==NULL)
    {
        return -1;
    }
    else{
        int left_max=height(s->left);
        int right_max=height(s->right);
        int max=left_max>right_max?left_max:right_max;
        return  max+1;
    }
}


/******************************************************************************************
                                DEPTH OF A KEY
*******************************************************************************************/

int depth(struct node *root,struct node *s)
{
    if(root==NULL)
    {
        return -1;
    }
    if(s==NULL)
    {
        return -1;
    }
    
    int depth=0;
    struct node *temp=root;
    while(temp!=s)
    {
        if(s->key<temp->key)
        {
            temp=temp->left;
            depth++;
        }
        else{
            temp=temp->right;
            depth++;
        }
    }

    return depth;
}

/******************************************************************************************
                                DELETION OF A NODE
*******************************************************************************************/

//recursive method
struct node *delete_recursive(struct node *s,struct node *root,int key)
{
    if(s==NULL)
    {
        return NULL;
    }
    if(key<s->key)
    {
        s->left=delete_recursive(s->left,root,key);
    }
    else if(key>s->key)
    {
        s->right=delete_recursive(s->right,root,key);
    }
    else{
        struct node *child=NULL;
        if(s->left==NULL&&s->right==NULL)
        {
            child=NULL;
            return child;
        }
        else if(s->left==NULL||s->right==NULL)
        {
            if(s->left!=NULL)
            {
                child=s->left;
                return child;
            }
            else{
                child=s->right;
                return child;
            }
        }
        else{
            struct node *succ=successor(root,s);
            s->key=succ->key;
            s->right=delete_recursive(s->right,root,succ->key);
        }
    }
    return s;
}

//Non-recursive method
struct node *delete_non_recursive(struct node *root, int key)
{
    struct node *y=root;
    if(root==NULL)
    {
        return NULL;
    }
    if(root->key==key&&root->left==NULL&&root->right==NULL)
    {
        return NULL;
    }

    struct node *temp=root;
    while(temp->key!=key)
    {
        y=temp;
        if(key<temp->key)
        {
            temp=temp->left;
        }
        else if(key>temp->key)
        {
            temp=temp->right;
        }
    }

    if(temp->left==NULL&&temp->right==NULL)
    {
        if(y->left==temp)
        {
            y->left=NULL;
        }
        else if(y->right==temp)
        {
            y->right=NULL;
        }
        return root;
    }
    else if(temp->left==NULL||temp->right==NULL)
    {
        if(temp==root)
        {
            if(temp->left!=NULL)
            {
                return temp->left;
            }
            else{
                return temp->right;
            }
        }
        else{
            if(temp->left!=NULL)
            {
                if(y->left==temp)
                {
                    y->left=temp->left;
                }
                else{
                    y->right=temp->left;
                }
            }
            else{
                if(y->left==temp)
                {
                    y->left=temp->right;
                }
                else{
                    y->right=temp->right;
                }
            }

            return root;
        }
    }
    else{
        struct node *succ=successor(root,temp);
        temp->key=succ->key;
        int temp_key=succ->key;
        struct node *succ_y=temp;
        struct node *start=temp->right;
        while(start!=succ)
        {
            succ_y=start;
            if(temp_key<start->key)
            {
                start=start->left;
            }
            else{
                start=start->right;
            }
        }
        if(start->left==NULL&&start->right==NULL)
        {
            if(succ_y->left==start)
            {
                succ_y->left=NULL;
            }
            else
            {
                succ_y->right=NULL;
            }
            
        }
        else if(start->right!=NULL)
        {
            if(succ_y->left==start)
            {
                succ_y->left=start->right;
            }
            else{
                succ_y->right=start->right;
            }
        }

        return root;        
    }
    return root;
}

/******************************************************************************************
                                MAIN FUNCTION
*******************************************************************************************/

int main()
{
    struct node *root=NULL;
    char ch='y';
    do{
        printf("***********************************BINARY SEARCH TREE****************************************\n");
        printf("Choose the following operations:\n");
        printf("1. Insert a key (Recursive Method)\n");
        printf("2. Insert a key (Non-Recursive Method)\n");
        printf("3. Delete a key (Recursive Method)\n");
        printf("4. Delete a key (Non-Recursive Method)\n");
        printf("5. Print the keys in Inorder\n");
        printf("6. Print the keys in Preorder\n");
        printf("7. Print the keys in Postorder\n");
        printf("8. Search a key\n");
        printf("9. Find the maximum key in a subtree\n");
        printf("10. Find the minimum key in a subtree\n");
        printf("11. Find the successor of given node\n");
        printf("12. Find the predecessor of given node\n");
        printf("13. Height of a key\n");
        printf("14. Depth of a key\n");
        printf("15. Exit\n");
        
        int n;
        scanf(" %d",&n);
        
        switch(n)
        {
            case 1:{
                     int key;
                     printf("Enter the key to be inserted(recursive method)\n");
                     scanf("%d",&key);
                     struct node *newNode=CreateNode(key);
                     root=insert_recursive(root,newNode);
                     printf("Key inserted successfully!!\n");
                     break;
                   }
            case 2:{
                     int key;
                     printf("Enter the key to be inserted(non-recursive method)\n");
                     scanf("%d",&key);
                     struct node *newNode=CreateNode(key);
                     root=insert_recursive(root,newNode);
                     printf("Key inserted successfully!!\n");
                     break;
                    
                   }
            case 3:{
                     int key;
                     printf("Enter the key to be deleted(recursive method)\n");
                     scanf("%d",&key);
                     struct node *temp=search(root,key);
                     if(temp==NULL)
                     {
                         printf("The entered key doesn't exist!!\n");
                     }
                     else{
                         root=delete_recursive(root,root,key);
                         printf("Key deleted :%d\n", key);
                     }
                     break;
                   }
            case 4:{
                     int key;
                     printf("Enter the key to be deleted(non-recursive method)\n");
                     scanf("%d",&key);
                     struct node *temp=search(root,key);
                     if(temp==NULL)
                     {
                         printf("The entered key doesn't exist\n");
                     }
                     else{
                         root=delete_non_recursive(root,key);
                         printf("Key deleted :%d\n", key);
                     } 
                     break;
                   }
            case 5:{
                    if(root==NULL)
                    {
                        printf("Empty BST\n");
                    }
                    else{
                        printf("The Inorder traversal of BST is\n");
                        inOrder(root);
                        printf("\n");
                    }
                    break;
                   }
            case 6:{
                    if(root==NULL)
                    {
                        printf("Empty BST\n");
                    }
                    else{
                        printf("The Preorder traversal of BST is\n");
                        preOrder(root);
                        printf("\n");
                    }
                    break;
                   }
            case 7:{
                    if(root==NULL)
                    {
                        printf("Empty BST\n");
                    }
                    else{
                         printf("The Postorder traversal of BST is\n");
                         postOrder(root);
                         printf("\n");
                    }
                    break;
                   }
            case 8:{
                    int key;
                    printf("Enter the key to be searched\n");
                    scanf("%d", &key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("The entered key doesn't exist\n");
                    }
                    else{
                        printf("Key found: %d\n",temp->key);
                    }
                    break;
                   }
            case 9:{
                    int key;
                    printf("Enter the root of the subtree\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("No such root exists\n");
                    }
                    else{
                        struct node *temp_root=maximum(temp);
                        printf("Maximum key in the tree: %d\n",temp_root->key);
                    }
                    break;
                   }
            case 10:{
                    int key;
                    printf("Enter the root of the subtree\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("No such root exists\n");
                    }
                    else{
                        struct node *temp_root=minimum(temp);
                        printf("Minimum key in the subtree: %d\n",temp_root->key);
                    }
                    break;
                   }
            case 11:{
                    int key;
                    printf("Enter the key whose successor you want to find\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("Entered element doesn't exist\n");
                    }
                    else{
                        struct node *succ=successor(root,temp);
                        if(succ==NULL)
                        {
                            printf("No successor exist\n");
                        }
                        else{
                            printf("Successor of %d is %d\n",key,succ->key);
                        }
                    }
                    break;
                   }
            case 12:{
                    int key;
                    printf("Enter the key whose predecessor you want to find\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("Entered element doesn't exist\n");
                    }
                    else{
                        struct node *pred=predecessor(root,temp);
                        if(pred==NULL)
                        {
                            printf("No predecessor exist\n");
                        }
                        else{
                            printf("Predecessor of %d is %d\n",key,pred->key);
                        }
                    }
                    break;
                   }
            case 13:{
                    int key;
                    printf("Enter the key to find its height\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("The entered key doesn't exist\n");
                    }
                    else{
                        printf("Height of the key is: %d\n",height(temp));
                    }
                    
                    break;
                   }
            case 14:{
                    int key;
                    printf("Enter the key to find its depth\n");
                    scanf("%d",&key);
                    struct node *temp=search(root,key);
                    if(temp==NULL)
                    {
                        printf("The entered key doesn't exist\n");
                    }
                    else{
                        printf("Depth of the key is: %d\n",depth(root,temp));
                    }
                    
                    break;
                   }
            case 15:{
                    ch='n';
                    break;
                   }
            default:{
                        printf("Wrong Choice Entered!!\n");
                    }
        }    
    }while(ch=='y'||ch=='Y');
    
    return 0;
}


