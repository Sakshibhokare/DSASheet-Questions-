class Solution{
    public:
    int findPosition(int in[], int element, int n){
        for(int i=0; i<n; i++){
            if(in[i]==element){
                return i;
            }
        }
    }
    
    Node* solve(int in[], int pre[], int &index, int inorderStart, int inorderEnd, int n){
        // base case 
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element=pre[index++];
        Node* root=new Node(element);
        int position= findPosition(in,element,n);
        
        root->left=solve(in, pre, index, inorderStart, position-1, n);
        root->right=solve(in,pre,index,position+1,inorderEnd,n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        // algo: 1)take index element of preorder as root element 
        // find root element posistion in inorder
        // root left recursion start to pos-1
        // right pos+1 to end of inoder
        
        
        int preOrderIndex=0;
        Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
        return ans;
    }
};
