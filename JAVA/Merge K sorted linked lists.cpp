
#include <bits/stdc++.h>
using namespace std;

// A Linked List node
struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


void printList(Node* node)
{
	while (node != NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
	cout<<endl;
}



struct Node
{
	int data;
	Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           if(K==0)
           return NULL;
           vector<pair<int , Node*>> a;
           for(int i=0;i<K;i++)
           {
               Node* n=arr[i];
               while(n!=NULL)
               {
                   a.push_back({n->data,n});
                   n=n->next;
               }
           }
           if(a.size()==0)
           return NULL;
           
           sort(a.begin(),a.end());
           for(int i=0;i<a.size()-1;i++)
           {
               a[i].second->next=a[i+1].second;
           }
           a[a.size()-1].second->next=NULL;
           return a[0].second;
    }
};



int main()
{
   int t;
   cin>>t;
   while(t--)
   {
	   int N;
	   cin>>N;
       struct Node *arr[N];
       for(int j=0;j<N;j++)
        {
           int n;
           cin>>n;

           int x;
           cin>>x;
           arr[j]=new Node(x);
           Node *curr = arr[j];
           n--;

           for(int i=0;i<n;i++)
           {
               cin>>x;
               Node *temp = new Node(x);
               curr->next =temp;
               curr=temp;
           }
   		}
   		Solution obj;
   		Node *res = obj.mergeKLists(arr,N);
		printList(res);

   }

	return 0;
}

