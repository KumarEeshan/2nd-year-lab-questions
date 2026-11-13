#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct Node{
    int data;
    struct Node *left;
    struct Node *right;
};
struct Node *createnode(int data){
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data= data;
    node->left = NULL;
    node->right = NULL;
    return node;
}
struct Node *insertnode(struct Node *root, int data){
    if(root == NULL){
        root = createnode(data);
        return root;
    }
    else if(data <= root->data){
        root->left= insertnode(root->left, data);
    }
    else{
        root->right= insertnode(root->right, data);
    }
    return root;
}
void inorder(struct Node *root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}
int main(){
    struct Node *root = NULL;
    int max;
    printf("Enter the number of nodes: ");
    scanf("%d", &max);
    int keys[max];
    printf("Enter node elements");
    for(int i=0; i<max; i++){
        scanf("%d", &keys[i]);
    }
    for(int j=0; j<max; j++){
        root = insertnode(root, keys[j]);
    }
    inorder(root);
    return 0;
}