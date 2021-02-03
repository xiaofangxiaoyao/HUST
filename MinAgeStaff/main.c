#include <stdio.h>
#include "stdlib.h"
#include "string.h"
void MinAgeStuff(void);
typedef struct Staff{
    int number;
    char name[11];
    int age;
}Staff;
struct Staff* CreateStaff(int number,char *name,int age);

int main() {
    MinAgeStuff();
    return 0;
}
struct Staff* CreateStaff(int number,char *name,int age){
    Staff* staff=(struct Staff*)malloc(sizeof (struct Staff));//malloc never forget the(struct Staff*)
    staff->age=age;
    staff->number=number;
    int i=0;
//    printf("name[%d]=%c\n",i,name[i]);
    for (i = 0; name[i]!='\0'; ++i) {
        staff->name[i]=name[i];
//        printf("name[%d]=%c\n",i,name[i]);
//        printf("%c",staff->name[i]);
    }
    staff->name[i]='\0';
    return staff;
}
void MinAgeStuff(void){
//    FILE *fp_in;
//    fp_in=fopen("../data.txt","r");
//    if (fp_in==NULL){
//        printf("can't open the file");
//    }
    int staff_number;
    while (scanf("%d",&staff_number)!=EOF){
        int number;
        char name[11];
        int age;
        struct Staff* AllStaff[staff_number];//seem like not really understand struct
        for (int i = 0; i < staff_number; ++i) {
            scanf("%d %s %d",&number,name,&age);
            AllStaff[i]=CreateStaff(number,name,age);
//            printf("%s\n",AllStaff[i]->name);
        }
//        for (int i = 0; i < staff_number; ++i) {
//            printf("%d %s %d\n",AllStaff[i]->number,AllStaff[i]->name,AllStaff[i]->age);
//        }
        int first,second,third;
        first=0;
        int first_min=1000;
        for (int i = 0; i < staff_number; ++i) {
            if (AllStaff[i]->age<first_min){
                first_min=AllStaff[i]->age;
                first=i;
            }
            if (AllStaff[i]->age==first_min)
            {
                if (AllStaff[i]->number<AllStaff[first]->number){
                    first_min=AllStaff[i]->age;
                    first=i;
                }
                if (AllStaff[i]->number==AllStaff[first]->number){
                    if (strcmp(AllStaff[i]->name,AllStaff[first]->name)<0){
                        first_min=AllStaff[i]->age;
                        first=i;
                    }
                }
            }
        }
//        printf("%d",first);
        printf("%d %s %d\n",AllStaff[first]->number,AllStaff[first]->name,AllStaff[first]->age);
        int second_min=1000;
        for (int i = 0; i < staff_number; ++i) {
            if (AllStaff[i]->age<second_min&&AllStaff[i]->age>=first_min&&i!=first){
                second_min=AllStaff[i]->age;
                second=i;
            }
            if (AllStaff[i]->age==second_min)
            {
                if (AllStaff[i]->number<AllStaff[second]->number){
                    second_min=AllStaff[i]->age;
                    second=i;
                }
                if (AllStaff[i]->number==AllStaff[second]->number){
                    if (strcmp(AllStaff[i]->name,AllStaff[second]->name)<0){
                        second_min=AllStaff[i]->age;
                        second=i;
                    }
                }
            }
        }
        printf("%d %s %d\n",AllStaff[second]->number,AllStaff[second]->name,AllStaff[second]->age);
        int third_min=1000;
        for (int i = 0; i < staff_number; ++i) {
            if (AllStaff[i]->age<third_min&&i!=first&&i!=second&&AllStaff[i]->age>=second_min){
                third_min=AllStaff[i]->age;
                third=i;
            }
            if (AllStaff[i]->age==third_min)
            {
                if (AllStaff[i]->number<AllStaff[third]->number){
                    third_min=AllStaff[i]->age;
                    third=i;
                }
                if (AllStaff[i]->number==AllStaff[third]->number){
                    if (strcmp(AllStaff[i]->name,AllStaff[third]->name)<0){
                        third_min=AllStaff[i]->age;
                        third=i;
                    }
                }
            }
        }
        printf("%d %s %d",AllStaff[third]->number,AllStaff[third]->name,AllStaff[third]->age);

    }
}
