pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
//      predecessor=left sub-max element
//     succesor= right subtree- min element
//     time comp=o(n)
//     space com=o(1)
//     find key
    BinaryTreeNode<int> *temp=root;
    int pred=-1;
    int succ=-1;
//     find key
    while(temp->data!=key){
        if(temp->data>key){
            succ=temp->data;
            temp=temp->left;
        }
        else{
            pred=temp->data;
            temp=temp->right;
        }
    }
    
//     pred
    BinaryTreeNode<int> *leftTree=temp->left;
    while(leftTree!=NULL){
        pred=leftTree->data;
        leftTree=leftTree->right;
    }
    
//     succ
    BinaryTreeNode<int> *rightTree=temp->right;
    while(rightTree!=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }
//      
    return {pred,succ};
}
