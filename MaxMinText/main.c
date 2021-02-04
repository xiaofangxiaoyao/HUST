#include <stdio.h>
#include "string.h"
#include "stdlib.h"
typedef struct Node{
    char s[400];
    int len;
}Node;
struct Node* CreateNode(char *s,int len);
int main() {
//    FILE *fp;
//    fp=fopen("../data.txt","r");
    char s[400];
    struct Node* NodeArray[100];
    int len=0;
    int i=0;
    while (gets(s)!=NULL){//remember:when gets,gets:null;when scanf fscanf:EOF
        len=strlen(s);
//        printf("len= %d\n",len);
        NodeArray[i]=CreateNode(s,len);
        i++;
        if (i>99){
            printf("NodeArray out of bound");
            break;
        }
    }
    int NodeNumber=i;
    int max_a,min_b;
    max_a=min_b=NodeArray[0]->len;
    int max[100];
    int min[100];
    for (int j = 1; j < NodeNumber; ++j) {
        if (NodeArray[j]->len>max_a){
            max_a=NodeArray[j]->len;
        }
        if (NodeArray[j]->len<min_b){
            min_b=NodeArray[j]->len;
        }
    }
    int max_len=0;
    int min_len=0;
    for (int j = 0; j < NodeNumber; ++j) {
        if (NodeArray[j]->len==max_a){
            max[max_len]=j;
            max_len++;
        }
        if (NodeArray[j]->len==min_b){
            min[min_len]=j;
            min_len++;
        }
    }
    for (int j = 0; j < min_len; ++j) {
        printf("%s",NodeArray[min[j]]->s);
        printf("\n");
    }

    for (int j = 0; j <max_len ; ++j) {
        printf("%s",NodeArray[max[j]]->s);
        printf("\n");
    }
    return 0;
}
struct Node* CreateNode(char *s,int len){
    struct Node* node =(struct Node*)malloc(sizeof (struct Node));
    strcpy(node->s,s);
    node->len=len;
    return node;
}