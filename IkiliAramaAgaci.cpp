#include "IkiliAramaAgaci.h"

int IkiliAramaAgaci::getHeight(Node* node) {
    if (node == nullptr) return 0;
    return 1 + max(getHeight(node->left), getHeight(node->right));
}

bool IkiliAramaAgaci::isAVL(Node* node) {
    if (node == nullptr) return true;

    // Calculate the height of the left and right subtrees
    int leftHeight = getHeight(node->left);
    int rightHeight = getHeight(node->right);

    // Calculate the difference in height between the left and right subtrees
    int diff = abs(leftHeight - rightHeight);

    // If the difference is more than 1, the BST is not an AVL tree
    if (diff > 1) return false;

    // Recursively check the left and right subtrees
    return isAVL(node->left) && isAVL(node->right);
}

IkiliAramaAgaci::Node* IkiliAramaAgaci::newNode(int key, vector<int> data){
	Node* node = new Node;
	node->key = key;
	node->doku = data;
	node->left = node->right = NULL;
	return node;
}

IkiliAramaAgaci::Node* IkiliAramaAgaci::insert(Node* node, int key, vector<int> data)
{
	if (node == NULL)
		return newNode(key, data);

	if (key < node->key)
		node->left = insert(node->left, key, data);
	else if (key > node->key)
		node->right = insert(node->right, key, data);
	return node;
}

void IkiliAramaAgaci::postOrder(Node* node){
	if (node == NULL)
		return;

	postOrder(node->left);
	postOrder(node->right);
	cout << node->key << " ";
}

void IkiliAramaAgaci::inOrder(Node* node) {
	if (node == NULL)
		return;

	inOrder(node->left);
	cout << node->key << " ";
	inOrder(node->right);
}

vector<int> IkiliAramaAgaci::postOrderReader(Node* node) {
	if (node == NULL)
		return vector<int>();

	postOrderReader(node->left);
	postOrderReader(node->right);
	return node->doku;
}