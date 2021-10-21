#include <iostream>
#include "ItemType.h"
using namespace std;

/*As discussed in class write to code to delete from a BST. 
Remember to use helper functions that are recursive as member functions shouldn't be recursive.*/

struct node_t
{
    int data;
    struct node_t *left;
    struct node_t *right;
};

int main()
{
}
/*//GetLength and CountNodes
int CountNodes(TreeNode *tree);
int TreeType::GetLength() const
// Calls the recursive function CountNodes to count the
// nodes in the tree.
{
    return CountNodes(root);
}
int CountNodes(TreeNode *tree)
// Post: Returns the number of nodes in the tree.
{
    if (tree == NULL)
        return 0;
    else
        return CountNodes(tree->left) +
               CountNodes(tree->right) + 1;
}*/
/*//GetItem and Retrieve
ItemType TreeType::GetItem(ItemType item, bool &found) const
{
    Retrieve(root, item, found);
    return item;
}
void Retrieve(TreeNode *tree, ItemType &item, bool &found)
{
    if (tree == NULL)
        found = false; // item is not found.
    else if (item < tree→info)
        Retrieve(tree->left, item, found); // Search left subtree.
    else if (item > tree→info)
        Retrieve(tree->right, item, found); // Search right subtree.
    else
    {
        item = tree->info; // item is found.
        found = true;
    }
}*/
/*//PutItem and Insert
void Insert(TreeNode *&tree, ItemType item);
void TreeType::PutItem(ItemType item)
{
    Insert(root, item);
}
void Insert(TreeNode *&tree, ItemType item)
{
    if (tree == NULL)
    { // Insertion place found.
        tree = new TreeNode;
        tree->right = NULL;
        tree->left = NULL;
        tree->info = item;
    }
    else if (item < tree->info)
        Insert(tree->left, item); // Insert in left subtree.
    else
        Insert(tree->right, item); // Insert in right subtree.
}*/

//Delete
/*We’re looking for the predecessor of the
deleted node: The node with next lowest value
⚫ The predecessor is the furthest right child in the
deleted node’s left subtree
⚫ The predecessor may have a left child, so call
Delete (left subtree, predecessor)
⚫ Then replace the deleted node with
predecessor*/
