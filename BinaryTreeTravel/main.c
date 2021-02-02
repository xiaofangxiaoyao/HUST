#include <stdio.h>
#include "string.h"
#include "stdlib.h"
typedef struct Node{ //in c if you don't use typedef ,everytime you use Node,you just need add typedef
    char value;
    struct Node *left;
    struct Node* right;
}Node;

void BinaryTreeTravelFile(void);
void BinaryTreeTravel(void);
Node* CreateBinaryTree(char *front,char *middle,int number);//use front and middle to creat a tree,return tree
void PostOrderTravel(Node *root);
Node* CreatNode(void);//create a clean node
int FindPlace(char *s,int number,char a);//return a place


int main() {
//    BinaryTreeTravelFile();
    BinaryTreeTravel();
    return 0;
}
Node* CreatNode(void){
    struct Node * node =(struct Node *)malloc(sizeof (struct Node));
    node->value='\0';
    node->left=NULL;
    node->right=NULL;
    return node;
}
int FindPlace(char *s,int number,char a){
    int i;
    for (i = 0; i < number; ++i) {
        if (s[i]==a){
            break;
        }
    }
    return i+1;
}

Node* CreateBinaryTree(char *front,char * middle,int number){
    if (number==0){
        return NULL;
    } else{
        struct Node * node =CreatNode();
        node->value=front[0];
//        printf("%c\n",front[0]);
        int place;
        place=FindPlace(middle,number,front[0]);
        node->left=CreateBinaryTree(front+1,middle,place-1);
        node->right=CreateBinaryTree(front+place,middle+place,number-place);
        return node;
    }
}
void PostOrderTravel(Node *root){
    if (root->left==NULL&&root->right==NULL){
        printf("%c",root->value);
    } else{
        if (root->left==NULL&&root->right!=NULL){
            PostOrderTravel(root->right);
            printf("%c",root->value);
        } else{
            if (root->right==NULL&&root->left!=NULL){
                PostOrderTravel(root->left);
                printf("%c",root->value);
            } else{
                PostOrderTravel(root->left);
                PostOrderTravel(root->right);
                printf("%c",root->value);
            }
        }

    }

}
void BinaryTreeTravelFile(void){
    char s1[27];
    char s2[27];
    FILE * fp_in;
    int Node_Number;
    fp_in=fopen("../data_in.txt","r");
    if (fp_in==NULL){
        printf("can't read the file");
    }
    int number;
    Node *root;
    while (fscanf(fp_in,"%s",s1)!=EOF&&fscanf(fp_in,"%s",s2)!=EOF){
        number=strlen(s1);
        root=CreateBinaryTree(s1,s2,number);
        PostOrderTravel(root);
        printf("\n");
    }
}
void BinaryTreeTravel(void){
    char s1[27];
    char s2[27];
    int number;
    Node *root;
    while (scanf("%s",s1)!=EOF&&scanf("%s",s2)!=EOF){
        number=strlen(s1);
        root=CreateBinaryTree(s1,s2,number);
        PostOrderTravel(root);
        printf("\n");
    }
}