class Solution{
  public:
  void solve(Node* root, int k, int &count, vector<int>path){
      if(root==NULL){
          return ;
      }
      
      path.push_back(root->data);
      
    //   left
    solve(root->left,k,count,path);
    // right
    solve(root->right,k,count,path);
    
    int size=path.size();
    int sum=0;
    for(int i=size-1; i>=0; i--){
        sum+=path[i];
        if(sum==k)
        count++;
    }
    // wapas jate time last element emove karna hei!!😒
    path.pop_back();
  }
    int sumK(Node *root,int k)
    {
        // code here 
        // make path on each node and compare then update count+1
        vector<int>path;
        int count =0;
        solve(root, k, count, path);
        return count;
    }
};

// { Driver Code Starts.

int main() {
    string tc;
    getline(cin, tc);
    int t = stoi(tc);
  
    while(t--)
    {
        string s ,ch;
        getline(cin, s);
        Node* root = buildTree(s);

        string key;
        getline(cin, key);
        int k=stoi(key);
        Solution ob;
        cout << ob.sumK(root, k) << "\n";
    }
    return 0;
}  // } Driver Code Ends
