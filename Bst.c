/* 
 * File:   Bst.c
 * Author: Joseph
 *
 * This program takes in numbers and adds them to a binary tree and displays them in preorder and inorder
 */
#include <stdio.h>
#include <stdlib.h>
#include "Bst.h"


TreeNode* insert (int newValue, TreeNode* root){ 
    //we have a insert function that takes a new value and a Treenode root
  
    TreeNode* newNode = root;
        
    if (newNode != NULL){
        
        if(newValue<newNode->value){
            newNode->left = insert(newValue, newNode->left);
            
        }
        else if (newValue > newNode->value){
            newNode->right = insert(newValue, newNode->right);
            
        }
        return newNode;
    }
    else {
        TreeNode * newNode = malloc(sizeof(TreeNode));
        newNode->value = newValue;
        newNode ->left =NULL;
        newNode-> right = NULL;
        return newNode;
    }
}
void inOrder(TreeNode* root){
    if (root == 0){
        return;
    } else {
        inOrder(root->left);
        printf("%d", root->value);
        inOrder(root->right);
    }
}
    
    void preOrder(TreeNode* root){
    
    
    if(root ==0)
    
        return;
    
    else{
        printf("%d", root->value);
        preOrder(root->left);
        preOrder(root->right);
    
    }
}

