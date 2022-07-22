TreeNode<int>* LCAinaBST(TreeNode<int>* root, TreeNode<int>* P, TreeNode<int>* Q)
{
//     tc=o(n)
//     sc=o(1)
	while(root!=NULL){
        if(root->data < P->data && root->data < Q->data)
            root=root->right;
        
     else   if(root->data > P->data && root->data > Q->data)
          root=root->left;
        
        else {
            return root;
        }
    }
}
