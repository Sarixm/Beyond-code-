//#include <iostream>
//#include <vector>
//using namespace std;
//
//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//TreeNode* buildTreeHelper(int* preorder, int* inorder, int preStart, int inStart, int inEnd) {
//    if (preStart > inEnd) return nullptr;
//    TreeNode* root = new TreeNode(preorder[preStart]);
//    int mid = inStart;
//    while (inorder[mid] != preorder[preStart]) mid++;
//    root->left = buildTreeHelper(preorder, inorder, preStart + 1, inStart, mid - 1);
//    root->right = buildTreeHelper(preorder, inorder, preStart + 1 + (mid - inStart), mid + 1, inEnd);
//    return root;
//}
//
//// פונקציה לבניית העץ
//TreeNode* buildTree(int* preorder, int* inorder, int size) {
//    return buildTreeHelper(preorder, inorder, 0, 0, size - 1);
//}
//
//// פונקציה להדפסת העץ בסדר inorder
//void printInorder(TreeNode* node) {
//    if (node == nullptr) return;
//    printInorder(node->left);
//    cout << node->val << " ";
//    printInorder(node->right);
//}
//
//int main() {
//    int preorder[] = { 3, 9, 20, 15, 7 };  // סדר preorder
//    int inorder[] = { 9, 3, 15, 20, 7 };   // סדר inorder
//    int size = sizeof(preorder) / sizeof(preorder[0]);
//
//    TreeNode* root = buildTree(preorder, inorder, size);
//
//    cout << "Inorder traversal of the constructed tree: ";
//    printInorder(root);
//    cout << endl;
//
//    return 0;
//}