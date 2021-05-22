#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	int key;
	struct TreeNode* left, * right;
}TreeNode;

TreeNode* create_node(int value)
{
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->key = value;
	node->left = node->right = NULL;
	return node;
}

TreeNode* insert_node(TreeNode* root, int value)
{
	if (!root)
		return create_node(value);
	if (root->key > value)
		root->left = insert_node(root->left, value);
	else if (root->key < value)
		root->right = insert_node(root->right, value);

	return root;
}

void postorder(TreeNode* root)
{
	if (!root)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d\n", root->key);
}

int main(void)
{
	TreeNode *root = NULL;
    int value;
        
    while (scanf("%d", &value) != EOF)
	{
		root = insert_node(root, value);	
	}
    postorder(root);
}
