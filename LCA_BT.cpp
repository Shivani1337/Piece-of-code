#include <iostream>
#include <vector>

using namespace std;


struct Node
{
	int key;
	struct Node *left, *right;
};


Node * newNode(int k)
{
	Node *temp = new Node;
	temp->key = k;
	temp->left = temp->right = NULL;
	return temp;
}

bool findPath(Node *root, vector<int> &path, int k)
{
	// base case
	if (root == NULL) return false;

	path.push_back(root->key);

	// See if the k is same as root's key
	if (root->key == k)
		return true;

	// Check if k is found in left or right sub-tree
	if ( (root->left && findPath(root->left, path, k)) ||
		(root->right && findPath(root->right, path, k)) )
		return true;

	path.pop_back();
	return false;
}

int findLCA(Node *root, int n1, int n2)
{
	// to store paths to n1 and n2 from the root
	vector<int> path1, path2;

	// Find paths from root to n1 and root to n1. If either n1 or n2
	// is not present, return -1
	if ( !findPath(root, path1, n1) || !findPath(root, path2, n2))
		return -1;

	
	int i;
	for (i = 0; i < path1.size() && i < path2.size() ; i++)
		if (path1[i] != path2[i])
			break;
	return path1[i-1];
}


int main()
{
	
	Node * root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(6);
	root->right->right = newNode(7);
	cout << "LCA(4, 5) = " << findLCA(root, 4, 5);
	cout << "nLCA(4, 6) = " << findLCA(root, 4, 6);
	cout << "nLCA(3, 4) = " << findLCA(root, 3, 4);
	cout << "nLCA(2, 4) = " << findLCA(root, 2, 4);
	return 0;
}
