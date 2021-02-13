
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char num[128];
    int nl, fl, ret = 0;
    if (!*gets(num)) {
        printf("input error!\n");
        return -1;
    }
    nl = strlen(num);
    for (fl = nl >> 1; fl; ) {
        if (memcmp(num + nl - fl, num + nl - (fl << 1), fl)) {
            fl--;
        } else {
            ret = fl;
            if (fl & 1) {
                break;
            }
            fl >>= 1;
        }
    }
    if (!ret) {
        printf("no factor found!\n");
        return -2;
    }
    printf("factor is: %s", num + nl - ret);
    return 0;
}
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
