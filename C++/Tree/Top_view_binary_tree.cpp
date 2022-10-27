// CPP program to print top view of a binary tree
// Top view of a binary tree is the set of nodes visible when the tree is viewed from the top.
// TIME COMPLEXITY : O(N)
//Function to return a list of nodes visible from the top view 
//from left to right in Binary Tree.
vector<int> topView(Node *root)
{
    //Your code here
        map<int,int> m;
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node *curr=it.first;
        int pos=it.second;

    //We will add only top of any position to map
    /*If map already contains element of this pos then this node will not be visible in top view*/

        if(m.find(pos)==m.end())
            m[pos]=curr->data;
        
        if(curr->left!=NULL)
            q.push({curr->left,pos-1});
            
        if(curr->right!=NULL)
            q.push({curr->right,pos+1});
        
    }
    vector<int> ans;
    for(auto i:m)
        ans.push_back(i.second);
    return ans;
}




int main() {
    string treeString;
    getline(cin, treeString);
    Solution ob;
    Node *root = buildTree(treeString);
    vector<int> vec = ob.topView(root);
    for(int x : vec)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}  