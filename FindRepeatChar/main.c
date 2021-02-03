#include <stdio.h>
#include "string.h"
#include "stdlib.h"
typedef struct Node{
    char a;
    int n;
    int ps[200];
}Node;
struct Node* CreateNode(char a);
int search(struct Node nodearray[100],int node_number,char c);
int HasNode(struct Node nodearray[100],int node_number,char c);
int main() {
    char s[1000];
    struct Node * nodearray[100];
    int node_number=0;
    scanf("%s",s);
    int len=strlen(s);
    int place=0;
    for (int i = 0; i < len; ++i) {
        if (i==0){
            nodearray[0]=CreateNode(s[i]);
            nodearray[0]->ps[nodearray[0]->n]=i;
            nodearray[0]->n++;
            node_number++;

        } else{
            int flag=0;
            for (int j = 0; j < node_number; ++j) {
                if (nodearray[j]->a==s[i]){
                    flag=1;
                    break;
                }
            }
            if (flag){
                int place=0;
                for (int j = 0; j < node_number; ++j) {
                    if ((nodearray[j])->a==s[i]){
                        place=j;
                        break;
                    }
                }
                nodearray[place]->ps[nodearray[place]->n]=i;
                nodearray[place]->n++;
            } else{
                nodearray[node_number]=CreateNode(s[i]);
                nodearray[node_number]->ps[nodearray[node_number]->n]=i;
                nodearray[node_number]->n++;
                node_number++;
            }
        }
    }
    for (int i = 0; i < node_number; ++i) {
        if (nodearray[i]->n>1){
            for (int j = 0; j < nodearray[i]->n; ++j) {
                printf("%c:%d",nodearray[i]->a,nodearray[i]->ps[j]);
                if (j!=nodearray[i]->n-1){
                    printf(",");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
struct Node* CreateNode(char a){
    struct Node* node=(struct Node*)malloc(sizeof (struct Node));
    node->a=a;
    node->n=0;
    for (int i = 0; i < 200; ++i) {
        node->ps[i]=0;
    }
    return node;
}
int search(struct Node nodearray[100],int node_number,char c){//try to find out how to pass nodearray
    int place=0;
    for (int i = 0; i < node_number; ++i) {
        if ((&nodearray[i])->a==c){
            place=i;
            break;
        }
    }
    return place;
}
int HasNode(struct Node nodearray[100],int node_number,char c){
    int flag=0;
    for (int i = 0; i < node_number; ++i) {
        if ((&nodearray[i])->a==c){
            flag=1;
            break;
        }
    }
    return flag;
}