#include<bits/stdc++.h>
using namespace std;
/**
 * Definition for a binary tree node.
 * */
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
    int checkForBT(TreeNode *root, bool &ans) {
        if (ans == false) return -1;
        if (!root) return 0;
        int lheight = checkForBT(root->left, ans);
        int rheight = checkForBT(root->right, ans);
        if (abs(lheight-rheight) > 1) ans = false;
        return 1 + max (lheight, rheight);
    }
    bool isBalanced(TreeNode* root) {
                bool ans = true;
        int h = checkForBT(root, ans);
        return ans;
        
    }
};
int main() 
{
     
     
  return 0;
}