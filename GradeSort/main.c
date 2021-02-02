#include <stdio.h>
#include "string.h"
#include "stdlib.h"
typedef struct Student{
    char name[101];
    int age;
    int grade;
}Student;
void GradeSort(void);
Student CreateStudent(char name[100],int age,int grade);
void InnerSort(struct Student *student, int number);
void SortByGrade(struct Student *student, int number);
void SortByName(struct Student *student, int number);
void SortByAge(struct Student *student, int number);
void PrintfAll(struct Student*student,int number);
void Exchange(struct Student *student1,struct Student*student2);



int main() {
    GradeSort();
    return 0;
}
void GradeSort(void){
    int number;
    scanf("%d",&number);
    struct Student AllStudent[number];
    for (int i = 0; i < number; ++i) {
        char name[101];
        int age;
        int grade;
        scanf("%s %d %d",name,&age,&grade);
        AllStudent[i]=CreateStudent(name,age,grade);
    }
    InnerSort(AllStudent,number);
    PrintfAll(AllStudent,number);
}
void PrintfAll(struct Student*student,int number){
    for (int i = 0; i < number; ++i) {
        printf("%s %d %d\n",student[i].name,student[i].age,student[i].grade);
    }
}
void Exchange(struct Student *student1,struct Student*student2){
    int grade,age;
    char name[101];
    grade=(*student1).grade;
    (*student1).grade=(*student2).grade;
    (*student2).grade=grade;
    age=(*student1).age;
    (*student1).age=(*student2).age;
    (*student2).age=age;
    for (int i = 0; i < 101; ++i) {
        name[i]=(*student1).name[i];
        (*student1).name[i]=(*student2).name[i];
        (*student2).name[i]=name[i];
    }
}
void SortByGrade(struct Student *student, int number){
    for (int i = 0; i < number; ++i) {
        for (int j = 1; j < number-i; ++j) {
            if (student[j-1].grade>student[j].grade){
                Exchange(&student[j-1],&student[j]);
            }
            if (student[j-1].grade==student[j].grade){
                SortByName(student+j-1,2);
            }
        }
    }
}
void SortByName(struct Student *student, int number){
    for (int i = 0; i < number; ++i) {
        for (int j = 1; j < number-i; ++j) {
            if (strcmp(student[j-1].name,student[j].name)>0){//strcmp return :if str1>str2 >0
                Exchange(&student[j-1],&student[j]);
            }
            if (strcmp(student[j-1].name,student[j].name)==0){
                SortByAge(student+j-1,2);
            }
        }
    }
}
void SortByAge(struct Student *student, int number){
    for (int i = 0; i < number; ++i) {
        for (int j = 1; j < number-i; ++j) {
            if (student[j-1].age>student[j].age){
                Exchange(&student[j-1],&student[j]);
            }
        }
    }
}
void InnerSort(struct Student *student, int number){
    SortByGrade(student,number);
//    SortByName(student,number);
//    SortByAge(student,number);
}

Student  CreateStudent(char name[101],int age,int grade){
    struct Student * student=(struct Student*)malloc(sizeof (struct Student));
    for (int i = 0; i < 101; ++i) {
        student->name[i]=name[i];
    }
    student->age=age;
    student->grade=grade;
    return *student;
}
