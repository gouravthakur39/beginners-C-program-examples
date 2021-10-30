/* Tree Node Structure */

struct Node {
  int data;
  Node* left;
  Node* right;
};

/* Inorder Traversal of Binary tree */

void inorderTraversal(Node* root) {
    if (root == NULL)
        return;
    /* recurring on left child */
    inorderTraversal(root->left);
    
    /* printing the data of node */
    cout << root->data << " ";
    
    /* recurring on right child */
    inorderTraversal(root->right);
}

/* Preorder Traversal of Binary tree */

void preorderTraversal(Node* root) {
    if (root == NULL)
        return;
    /* printing the data of node */
    cout << root->data << " ";
    
    /* recurring on left child */
    preorderTraversal(root->left);
  
    /* recurring on right child */
    preorderTraversal(root->right);
}


/* Postorder Traversal of Binary tree */

void postorderTraversal(Node* root) {
    if (root == NULL)
        return;
    /* recurring on left child */
    postorderTraversal(root->left);
  
    /* recurring on right child */
    postorderTraversal(root->right);
    
    /* printing the data of node */
    cout << root->data << " ";
}
