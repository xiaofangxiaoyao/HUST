#include <stdio.h>
void StringConnect(void);

int main() {
    StringConnect();
    return 0;
}
void StringConnect(void){
    char a[1000];
    int i=0;
    while (scanf("%s",a+i)!=EOF){
        while ((a[i]!='\0')){
//            printf("%d\n",i);
//            printf("%c\n",a[i]);
            i++;
        }
//        printf("%s\n",a);
    }
    printf("%s",a);
}

