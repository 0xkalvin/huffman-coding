#include <stdio.h> 
#include <stdlib.h> 

typedef struct TreeNode {

    int frequency;
    char letter;
    struct TreeNode* next;

} TreeNode;


typedef struct Tree {
    TreeNode* root;

} Tree;



TreeNode* createNode(int frequency);
Tree* createList();
void setChar(TreeNode* n, char c);
void setSubtrees(TreeNode* left, TreeNode* right);
