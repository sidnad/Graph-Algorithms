/*****************************************************************************
Program which implements the Breadth First Search algorithm on a binary tree
In the binary tree, the value of the left child<=value of it's parent and
value of the right child>value of it's parent
*****************************************************************************/
#include <iostream>
#include<queue>
#include "tree.h"

using namespace std;

void BFS(tree *root);

int main() {
	tree *root = NULL;
	int num;
	cout << "Enter number of nodes(0-25):";
	cin >> num;
	root=get_tree(root, num);

	cout << "Breadth First Search\n";
	BFS(root);


	return 0;
}

void BFS(tree *root) {
	if (root == NULL) {
		cout << "Tree is empty\n";
		return;
	}
	queue<tree*> q;
	q.push(root);

	while (!q.empty()) {
		tree *current = q.front();
		cout << current->value << " ";
		if (current->left != NULL) q.push(current->left);
		if (current->right != NULL) q.push(current->right);
		q.pop();
	}
	cout << endl;
}