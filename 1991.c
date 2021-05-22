#include <stdio.h>
#include <stdlib.h>

typedef struct TreeNode {
	char key;
	struct TreeNode* left, * right;
}TreeNode;

TreeNode* create_node(char value)
{
	TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
	node->key = value;
	node->left = node->right = NULL;
	return node;
}

TreeNode* insert_node(TreeNode* root, char value, char l_value, char r_value)
{
	if (!root)
		root = create_node(value);

	if (l_value != '.')
		root->left = create_node(l_value);
	if (r_value != '.')
		root->right = create_node(r_value);

	return root;
}

void preorder(TreeNode* root)
{
	if (root != NULL) {
		printf("%c", root->key);
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(TreeNode* root)
{
	if (root != NULL) {
		inorder(root->left);
		printf("%c", root->key);
		inorder(root->right);
	}
}

void postorder(TreeNode* root)
{
	if (root != NULL) {
		postorder(root->left);
		postorder(root->right);
		printf("%c", root->key);
	}
}

int main(void)
{
	TreeNode* root = NULL;
	char value, l_value, r_value;
	int n;

	scanf("%d", &n);
	if (n < 1 || n > 26)
		exit(1);

	for (int i = 0; i < n; i++)
	{
		scanf("%c %c %c", &value, &l_value, &r_value);
		root = insert_node(root, value, l_value, r_value);
	}

	preorder(root);
	printf("\n");
	inorder(root);
	printf("\n");
	postorder(root);
	printf("\n");
	
	return 0;
}
