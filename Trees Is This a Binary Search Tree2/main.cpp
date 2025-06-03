#include <cstddef>
#include <limits.h>
//  Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.
//
// The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	};
bool checkbs(Node*root,int minval,int maxval) {
	if (root==NULL) {
		return true;
	}
	if (root->data<=minval||root->data>=maxval) {
		return false;
	}
	return checkbs(root->left,minval,root->data)&&checkbs(root->right,root->data,maxval);
};
	bool checkBST(Node* root) {

		return checkbs(root,INT_MIN,INT_MAX);
	};