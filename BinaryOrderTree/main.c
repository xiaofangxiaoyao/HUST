#include <stdio.h>
#include <stdlib.h>

void BinaryOrderTreeFile(void);
void BinaryOrdeTree(void);
typedef struct Node{
    int value;
    struct Node * left;
    struct Node * right;
}Node;
Node* CreatNode(void);
Node* InsertNode(struct Node* t,struct Node* f,int i);

int main() {
//    BinaryOrderTreeFile();
    BinaryOrdeTree();
    return 0;
}
/*creat a node */
Node* CreatNode(void){
    Node *t ;
    t = (struct Node *)malloc(sizeof (struct Node));
    t->value=0;
    t->left=NULL;
    t->right=NULL;
    return t;
}
/*insert node
 * t:point node now
 * f:parents node
 * i:value */
Node* InsertNode(struct Node* t,struct Node* f,int i){
    if (t==NULL){
        t=CreatNode();
        t->value=i;
        if (f==NULL){
            printf("-1\n");
        } else{
            printf("%d\n",f->value);
        }
    } else{
        if (t->value>i){
            t->left=InsertNode(t->left,t,i);
        } else{
            t->right=InsertNode(t->right,t,i);
        }
    }
    return t;
}


void BinaryOrderTreeFile(void){
    FILE * fp_in;
    int Node_Number;
    fp_in=fopen("../data_in.txt","r");
    if (fp_in==NULL){
        printf("can't read the file");
    }
    Node * t=NULL;
    Node * f=NULL;
    fscanf(fp_in,"%d",&Node_Number);
    for (int i = 0; i < Node_Number; ++i) {
        int value;
        fscanf(fp_in,"%d",&value);
        t=InsertNode(t,f,value);
    }

}
void BinaryOrdeTree(void){
    int Node_Number;
    Node * t=NULL;
    Node * f=NULL;
    scanf("%d",&Node_Number);
    for (int i = 0; i < Node_Number; ++i) {
        int value;
        scanf("%d",&value);
        t=InsertNode(t,f,value);
    }
}