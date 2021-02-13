#include <stdio.h>


int main() {
    char s[100];
    scanf("%s",s);
    int number;
    for (int i = 0; i < 100; ++i) {
        if (s[i]!='\0'){
            if (s[i]=='Y'){
                s[i]='A';
            } else{
                if (s[i]=='y'){
                    s[i]='a';
                } else{
                    if (s[i]=='Z'){
                        s[i]='B';
                    } else{
                        if (s[i]=='z'){
                            s[i]='B';
                        } else{
                            s[i]=s[i]+2;
                        }
                    }
                }
            }
        } else{
            number=i;
            break;
        }
    }
    printf("%s\n",s);
    for (int i = 0; i < number; ++i) {
        int shang;
        int yu;
        int temp_number=0;
        int temp[10];
        for (int j = 0; j < 10; ++j) {
            temp[j]=0;
        }
        shang=s[i];
        for (int j = 0; j < 8; ++j) {
            yu=shang%2;
            temp[7-j]=yu;
            if (yu==1){
                temp_number++;
            }
            shang=shang/2;
        }
        if (temp_number%2==0){
            temp[0]=1;
            for (int j = 0; j <8; j++) {
                printf("%d",temp[j]);
            }
            printf("% d\n",s[i]+128);
        } else{
            for (int j = 0; j <8; j++) {
                printf("%d",temp[j]);
            }
            printf("% d\n",s[i]);
        }
    }
    return 0;
}
