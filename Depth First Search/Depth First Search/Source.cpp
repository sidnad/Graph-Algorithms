/**************************************************************
Implements the Depth First Search algorithm on the binary tree
In-order access of nodes results the elements to be displayed
in sorted order
**************************************************************/
#include <iostream>
#include "tree.h"

using namespace std;

void DFS(tree *root);

int main() {
	tree *root = NULL;
	int num = 0;
	cout << "Enter number of nodes:";
	cin >> num;
	root = get_tree(root, num);

	cout << "After Depth First Search\n";
	DFS(root);
	cout << endl;

	return 0;
}

void DFS(tree *root) {
	if (root == NULL) {
		cout << "Tree is empty\n";
		return;
	}
	else {
		if (root->left != NULL) DFS(root ->left);
		cout << root->value<<" ";
		if (root->right != NULL) DFS(root->right);
	}
}