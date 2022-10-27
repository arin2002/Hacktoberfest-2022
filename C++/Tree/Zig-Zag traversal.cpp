/*
    Given a Binary Tree, Find the Zig-Zag Level Order Traversal of the Binary Tree.
    Example:    Input: 1, 2, 3, 4, -1, 5, 6, -1, -1, 7, 8                 // -1 means no node
                Output: 1, 3, 2, 4, 5, 6, 8, 7                                      1
                                                                                 /     \
    Time Complexity: O(n)                                                       2        3
    Space Complexity: O(n)                                                     /       /   \
                                                                              4       5     6
                                                                                    /   \
                                                                                   7     8
*/

#include <bits/stdc++.h>
using namespace std;
 
struct Node 
{
    int val;
    struct Node* left;
    struct Node* right;
 
    Node(int data) {
        val = data;
        left = NULL;
        right = NULL;
    }
};

vector<vector<int>> zigzag(Node *root)
{
    if (!root)
        return {};
    queue<Node *> q;
    vector<vector<int>> v;
    q.push(root);
    Node *node;
    while (!q.empty()) {
        int len = q.size();
        vector<int> temp;
        for (int i = 0; i < len; i++) {
            node = q.front();
            q.pop();
            temp.push_back(node->data);
            if (node->left)
                q.push(node->left);
            if (node->right)
                q.push(node->right);
        }
        if (v.size() % 2 != 0)
            reverse(temp.begin(), temp.end());
        v.push_back(temp);
    }
    return v;
}

int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->right->left = new Node(50);
    root->right->right = new Node(60);

    vector<vector<int>> res = zigZag(root);
    for(int i = 0; i < res.size(); i++){
        for(int j = 0; j < res[i].size(); i++)
            cout << res[i][j] << " ";
    }
    cout << endl;
    return 0;
}