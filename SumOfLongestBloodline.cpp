class Solution
{
public:
      
      void solve(Node* root, int sum, int &maxSum, int len, int &maxlen){
          if(root==NULL){
              if(len>maxlen){
                  maxlen=len;
                  maxSum=sum;
              }
              else if(len==maxlen){
                  maxSum=max(sum,maxSum);
              }
              return ;
          }
          
          sum=sum+root->data;
          solve(root->left,sum,maxSum,len+1,maxlen);
          solve(root->right,sum,maxSum,len+1,maxlen);
      }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        //code here
        // length is important to check 
        // after leaf node update ans if current lenght is more than previous 
        int len=0;
        int maxlen=0;
        int sum=0;
        int maxSum=INT_MIN;
        
        solve(root,sum,maxSum,len,maxlen);
        return maxSum;
    }
};

// { Driver Code Starts.

int main()
{

    int t;
    scanf("%d", &t);
    cin.ignore();
    while (t--)
    {
        string treeString;
        getline(cin, treeString);
        Node *root = buildTree(treeString);
        Solution obj;
        int res = obj.sumOfLongRootToLeafPath(root);
        cout << res << "\n";
    }
    return 0;
}  // } Driver Code Ends
