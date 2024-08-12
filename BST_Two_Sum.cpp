void inorder(TreeNode* root, vector<int> &t){
        if(root){
            inorder(root->left, t);
            t.push_back(root->val);
            inorder(root->right, t);
        }
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> t;
        inorder(root, t);
        int i=0; int j= t.size()-1;
        while(i<j){
            int sum= t[i] + t[j];
            if(sum == k)
                return true;
            if(sum<k)
                i++;
            else
                j--;
        }
        return false;
    }
