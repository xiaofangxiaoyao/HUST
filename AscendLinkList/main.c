#include <stdio.h>
#include "stdlib.h"
typedef struct Node{
    int value;
    struct Node * next;
}Node;
void AscendLinkList(void);
Node*CreateNode(int value);
Node*NodeLineAdd(struct Node* front,struct Node* node);//now i can't find out why front need to be passed by return!!!!


int main() {
    AscendLinkList();
    return 0;
}
Node* CreateNode(int value){
    struct Node *node =(struct Node*)malloc(sizeof (struct Node));
    node->value=value;
    node->next=NULL;
    return node;
}
Node* NodeLineAdd(struct Node* front,struct Node* node){
    struct Node * fast;
    struct Node * low;
    low=fast=front;
    while (fast!=NULL){
        if (fast->value<node->value){
            low=fast;
            fast=fast->next;
        } else{
            break;
        }
    }
    if (fast==NULL){
        low->next=node;
    } else{
        if (low==fast){
            front=node;
            front->next=low;
        } else{
            low->next=node;
            node->next=fast;
        }
    }
    return front;
}
void AscendLinkList(void){
    int number;
//    FILE *fp_in=fopen("../in.txt","r");
//    if (fp_in==NULL){
//        printf("can't open file");
//    }
    scanf("%d",&number);
    struct Node* front=NULL;
    struct Node* node=NULL;
    for (int i = 0; i < number; ++i) {
        int value;
        scanf("%d",&value);
        if (front==NULL){
            node=front=CreateNode(value);
        } else{
            node=CreateNode(value);
            front=NodeLineAdd(front,node);
        }
    }
    node=front;
    while (node!=NULL){
        printf("%d ",node->value);
        node=node->next;
    }

}
