Node* mergeTwoList(Node* a,Node* b){
    Node* temp=new Node(0);
    Node* res=temp;
    while(a!=NULL && b!=NULL){
        if(a->data<b->data){
            res->bottom=a;
            res=res->bottom;
            a=a->bottom;
        }
        else
        {
            res->bottom=b;
            res=res->bottom;
            b=b->bottom;
        }
    }
    if(a)
    res->bottom=a;
    else
    res->bottom=b;
    return temp->bottom;
}
Node *flatten(Node *root)
{
   // Your code here
   //Similar kind of merge k sorted linked list
   //I guess needs to be done using 2ptr+Priority queue data structure!!
   if(root==NULL || root->next==NULL)
   return root;
   root->next=flatten(root->next);
   root=mergeTwoList(root,root->next);
   return root;
}