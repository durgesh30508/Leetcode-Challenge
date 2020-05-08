/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int gx,gy,dx,dy;
    TreeNode *nx,*ny;
    void fun(TreeNode* root,int depth,TreeNode* parent){
        if(root == NULL)return;
        
        if(root->val == gx){
            dx = depth;
            nx = parent;
        }
        if(root->val == gy){
            dy = depth;
            ny = parent;
        }
        
        fun(root->left,depth+1,root);
        fun(root->right,depth+1,root);
        
    }
    bool isCousins(TreeNode* root, int x, int y) {
        gx = x,gy = y;
        fun(root,0,NULL);
        return (dx == dy and nx != ny);
    }
};

//Explanation
//Run a inorder traversal of a tree and store parent and depth of x and y
//then compare the data and return the result



