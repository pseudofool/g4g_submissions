vector<int> rightView(Node *root)
{
    vector<int> rightView;
    queue<Node*> pendingNodes;
    pendingNodes.push(root);
    while(pendingNodes.size() != 0){
        int n = pendingNodes.size();
        for (int i=0; i<n; i++){
            Node *front = pendingNodes.front();
            pendingNodes.pop();
            if (i == n-1){
                rightView.push_back(front->data);
            }
            
            if (front->left != NULL){
                pendingNodes.push(front->left);
            }
            if (front->right != NULL){
                pendingNodes.push(front->right);
            }
        }
    }
    return rightView;
}