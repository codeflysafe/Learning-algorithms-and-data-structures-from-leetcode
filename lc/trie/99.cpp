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
#include<vector>
#include<iostream>

using namespace std;
struct TreeNode {
     int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
class Solution {
public:
    TreeNode *prev = nullptr;
    TreeNode *first = nullptr;

    void recoverTree(TreeNode* root) {
        if(root){
            recoverTree(root->left);
            if(prev && prev->val > root->val){
                if(!first) {
                    first = prev;
                    cout << "First:" << first->val;
                }
            }else{
                if(first){
                    cout << "second:" <<prev->val;
                    int t = prev->val;
                    prev->val = first->val;
                    first->val = t;
                    return;
                }
            }
            prev = root;
            recoverTree(root->right);
        }
    }
};

int main(){
    Solution soc = Solution();
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(3);
    root->left->right = new TreeNode(2);
    soc.recoverTree(root);
    return 0;
}