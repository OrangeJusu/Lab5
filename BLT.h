#pragma once
#include <iostream>

using namespace std;

class BLT {
public:
    BLT();

    // Adds website name to tree
    void Add(string website);

    // Removes website name from tree
    void Remove(string website);

    // Prints nodes in alphabetical order
    void Print();

    // Prints nodes in tree format
    void TPrint();

    // Prints nodes in reverse alphabetical order
    void RPrint();

private:
    // Node structure for tree
    struct Node {
        std::string data;
        Node* left = nullptr;
        Node* right = nullptr;
    };

    Node* root;

    // Recursivly adds website to tree
    void AddRecursive(Node*& node, string w);

    // Recursivly removes website from tree
    void RemoveRecursive(Node*& node, string w);

    // Recursivly prints nodes in alphabetical order
    void PrintRecursive(Node* node);

    // Recursivly prints nodes in a tree format
    void TPrintRecursive(Node* node, int depth);

    // Recursivly prints nodes in reverse alphabetical order
    void RPrintRecursive(Node* node);
};
