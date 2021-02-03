#include <stdio.h>
#include "stdlib.h"
typedef struct Node{
    int value;
    struct Node* left;
    struct Node* right;
}Node;
struct Node* CreateNode(int value);
struct Node* InsertNode(struct Node* t,int value);
void PreorderTraversal(struct Node* t,struct Node* f);
void InOrderTraversal(struct Node* t,struct Node* f);
void PostOrderTraversal(struct Node* t,struct Node* f);
int main() {
    int number;
    int value;
    struct Node*t=NULL;
    struct Node*f=NULL;
    scanf("%d",&number);
    for (int i = 0; i < number; ++i) {
        scanf("%d",&value);
        t=InsertNode(t,value);
    }
    PreorderTraversal(t,f);
    printf("\n");
    InOrderTraversal(t,f);
    printf("\n");
    PostOrderTraversal(t,f);
    return 0;
}
struct Node* CreateNode(int value){
    struct Node* node=(struct Node*)malloc(sizeof (struct Node));
    node->value=value;
    node->left=NULL;
    node->right=NULL;
    return node;
}
struct Node* InsertNode(struct Node* t,int value){
    if (t==NULL){
        t=CreateNode(value);
    } else{
        if (t->value>value){
            t->left=InsertNode(t->left,value);
        } else{//value>=t->value
            t->right=InsertNode(t->right,value);
        }
    }
    return t;
}
void PreorderTraversal(struct Node* t,struct Node*f){
    if (t!=NULL){
        if (f==NULL||f->value!=t->value){
            printf("%d ",t->value);
        }
        PreorderTraversal(t->left,t);
        PreorderTraversal(t->right,t);
    }
}
void InOrderTraversal(struct Node* t,struct Node*f){
    if (t!=NULL){
        InOrderTraversal(t->left,t);
        if (f==NULL||f->value!=t->value){
            printf("%d ",t->value);
        }
        InOrderTraversal(t->right,t);
    }
}
void PostOrderTraversal(struct Node* t,struct Node*f){
    if (t!=NULL){
        PostOrderTraversal(t->left,t);
        PostOrderTraversal(t->right,t);
        if (f==NULL||f->value!=t->value){
            printf("%d ",t->value);
        }
    }
}