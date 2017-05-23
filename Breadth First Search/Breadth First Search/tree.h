/*
Contains functions to add nodes to a tree
*/
#include <iostream>

using namespace std;

#ifndef _TREE
#define _TREE
struct tree {
	int value;
	tree *left;
	tree *right;
};

//Create a new node with value x
tree* newnode(int x) {
	tree* temp = new tree();
	temp->value = x;
	temp->left = temp->right = NULL;
	return temp;
}

//Add a node to the tree. Ensures left node value<=root and right node value>root
tree* add(tree *root, int val) {
	tree* temp = newnode(val);

	if (root == NULL) {
		root = temp;
	}
	else if (val <= root->value) {
		root->left = add(root->left, val);
	}
	else {
		root->right = add(root->right, val);
	}
	return root;
}


tree* get_tree(tree *root, int num) {
	if (num < 0 || num>25) {
		cout << "Invalid number of nodes\n";
		return root;
	}
	else {
		cout << "Enter values for the nodes:";
		int val;
		for (int i = 0; i < num; i++) {
			cin >> val;
			root = add(root, val);
		}
		return root;
	}
}


#endif
