#include <stdio.h>

int main() {
    char s[26];
    for (int i = 0; i < 26; ++i) {
        s[i]='A'+i;
    }
    char a;
    scanf("%c",&a);
    int number;
    if (a>='A'&a<='Z'){
        for (int i = 0; i < 26; ++i) {
            if (a==s[i]){
                number=i;
                break;
            }
        }
        for (int i = 0; i <=number; ++i) {
            printf("%c ",s[i]);
        }
        for (int i =number-1; i >=0; --i) {
            printf("%c ",s[i]);
        }
    } else{
        if (a>='a'&&a<='z'){
            for (int i = 0; i < 26; ++i) {
                s[i]='a'+i;
            }
            for (int i = 0; i < 26; ++i) {
                if (a==s[i]){
                    number=i;
                    break;
                }
            }
            for (int i = 0; i <=number; ++i) {
                printf("%c ",s[i]);
            }
            for (int i =number-1; i >=0; --i) {
                printf("%c ",s[i]);
            }
        }
    }

    return 0;
}
