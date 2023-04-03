#include "BLT.h"
#include <iostream>

using namespace std;

BLT::BLT() {
	root = nullptr;
}

// Adds website name to tree
void BLT::Add(string website) {
	AddRecursive(root, website);
}

// Removes website name from tree
void BLT::Remove(string website) {
	RemoveRecursive(root, website);
}

// Prints nodes in alphabetical order
void BLT::Print() {

}

// Prints nodes in tree format
void BLT::TPrint() {

}

// Prints nodes in reverse alphabetical order
void BLT::RPrint() {

}

// Recursivly adds website to tree
void BLT::AddRecursive(Node*& node, std::string w) {
	if (node == nullptr) {
		// Makes new node if in right spot
		node = new Node;
		node->data = w;
		node->left, node->right = nullptr;
	}
	// Tells it where to go if less or greater and does a recursive call
	else if (w < node->data) {
		AddRecursive(node->left, w);
	}
	else {
		AddRecursive(node->right, w);
	}
}

// Recursivly removes website from tree
void BLT::RemoveRecursive(Node*& node, std::string w) {
	if (node == nullptr) {
		return;
	}
	else if (w < node->data) {
		RemoveRecursive(node->left, w);
	}
	else if (w > node->data) {
		RemoveRecursive(node->right, w);
	}
	else {
		if (node->left == nullptr && node->right == nullptr) {
			delete node;
			node = nullptr;
		}
		else if (node->left == nullptr) {
			Node* temp = node->right;
			delete node;
			node = temp;
		}
		else if (node->right == nullptr) {
			Node* temp = node->left;
			delete node;
			node = temp;
		}
		else {
			Node* tempL = node->left;
			Node* tempR = node->right;
			delete node;
			node = tempR;
			Node* minNode = node;
			while (minNode->left != nullptr)
			{
				minNode = minNode->left;
			}
			minNode->left = tempL;
		}
	}
}

// Recursivly prints nodes in alphabetical order
void BLT::PrintRecursive(Node* node) {

}

// Recursivly prints nodes in a tree format
void BLT::TPrintRecursive(Node* node, int indent) {

}

// Recursivly prints nodes in reverse alphabetical order
void BLT::RPrintRecursive(Node* node) {

}
