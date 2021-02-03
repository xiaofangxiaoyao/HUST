#include <stdio.h>
void PrintDAY(void);
int IsLeapYear(int year);
void PrintLeap(int year,int day);
void PrintNoLeap(int year,int day);

int main() {
    PrintDAY();
    return 0;
}
int IsLeapYear(int year){
    int isleap=0;
    if (year%4==0){
        if (year%100!=0){
            isleap=1;
        } else{
            if (year%400==0){
                isleap=1;
            }
        }
    }
    return isleap;
}
void PrintDAY(void){
    int year,day;
    while (scanf("%d %d",&year,&day)!=EOF){
        if (IsLeapYear(year)){
            PrintLeap(year,day);
        } else{
            PrintNoLeap(year,day);
        }
    }
}
void PrintLeap(int year,int day){
    //1 3 5 7 8 10 12:31
    //2:29
    //4 6 9 11:30
    int January_first=1;
    int February_first=January_first+31;
    int March_first=February_first+29;
    int April_first=March_first+31;
    int May_first=April_first+30;
    int June_first=May_first+31;
    int july_first=June_first+30;
    int August_first=july_first+31;
    int September_first=August_first+31;
    int October_first=September_first+30;
    int November_first=October_first+31;
    int December_first=November_first+30;
    int month;
    int month_day;
    if (day>=January_first&&day<February_first){
        month=1;
        month_day=day-January_first+1;
    }
    if (day>=February_first&&day<March_first){
        month=2;
        month_day=day-February_first+1;
    }
    if (day>=March_first&&day<April_first){
        month=3;
        month_day=day-March_first+1;
    }
    if (day>=April_first&&day<May_first){
        month=4;
        month_day=day-April_first+1;
    }
    if (day>=May_first&&day<June_first){
        month=5;
        month_day=day-May_first+1;
    }
    if (day>=June_first&&day<july_first){
        month=6;
        month_day=day-June_first+1;
    }
    if (day>=july_first&&day<August_first){
        month=7;
        month_day=day-july_first+1;
    }
    if (day>=August_first&&day<September_first){
        month=8;
        month_day=day-August_first+1;
    }
    if (day>=September_first&&day<October_first){
        month=9;
        month_day=day-September_first+1;
    }
    if (day>=October_first&&day<November_first){
        month=10;
        month_day=day-October_first+1;
    }
    if (day>=November_first&&day<December_first){
        month=11;
        month_day=day-November_first+1;
    }
    if (day>=December_first){
        month=12;
        month_day=day-December_first+1;
    }
    printf("%d-%02d-%02d\n",year,month,month_day);
}
void PrintNoLeap(int year,int day){
    //1 3 5 7 8 10 12:31
    //2:29
    //4 6 9 11:30
    int January_first=1;
    int February_first=January_first+31;
    int March_first=February_first+28;
    int April_first=March_first+31;
    int May_first=April_first+30;
    int June_first=May_first+31;
    int july_first=June_first+30;
    int August_first=july_first+31;
    int September_first=August_first+31;
    int October_first=September_first+30;
    int November_first=October_first+31;
    int December_first=November_first+30;
    int month;
    int month_day;
    if (day>=January_first&&day<February_first){
        month=1;
        month_day=day-January_first+1;
    }
    if (day>=February_first&&day<March_first){
        month=2;
        month_day=day-February_first+1;
    }
    if (day>=March_first&&day<April_first){
        month=3;
        month_day=day-March_first+1;
    }
    if (day>=April_first&&day<May_first){
        month=4;
        month_day=day-April_first+1;
    }
    if (day>=May_first&&day<June_first){
        month=5;
        month_day=day-May_first+1;
    }
    if (day>=June_first&&day<july_first){
        month=6;
        month_day=day-June_first+1;
    }
    if (day>=july_first&&day<August_first){
        month=7;
        month_day=day-july_first+1;
    }
    if (day>=August_first&&day<September_first){
        month=8;
        month_day=day-August_first+1;
    }
    if (day>=September_first&&day<October_first){
        month=9;
        month_day=day-September_first+1;
    }
    if (day>=October_first&&day<November_first){
        month=10;
        month_day=day-October_first+1;
    }
    if (day>=November_first&&day<December_first){
        month=11;
        month_day=day-November_first+1;
    }
    if (day>=December_first){
        month=12;
        month_day=day-December_first+1;
    }
    printf("%d-%02d-%02d\n",year,month,month_day);
}