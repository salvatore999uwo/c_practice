//chapter 6, loops
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
//project 9 - find earlier date
int day,month,year;
int earliest_day, earliest_month, earliest_year;
earliest_year = 9999;
earliest_month = 12;
earliest_day = 31;

while(1){
printf("enter a date (mm/dd/yy): ");
scanf("%d/%d/%d",&day,&month,&year);
if(day == 0, month == 0, year == 0){
    break;
}


if(year < earliest_year){
    earliest_year = year;
    earliest_month = month;
    earliest_day = day;
}
if(year == earliest_year){
    if(month < earliest_month){
        earliest_year = year;
        earliest_month = month;
        earliest_day = day;
    }

    if(month == earliest_month){
        if(day < earliest_day){
            earliest_year = year;
            earliest_month = month;
            earliest_day = day;
        }

    }
}
}

printf("all done boss. earliest date entered is %d/%d/%d",earliest_month,earliest_day,earliest_year);

//make it a do while loop for the first entry
//each loop
    //get date from user
    //is previous_earlier_date of a later or earlier year?
    //if they are equal year, go onto month
    //if they are equal month, go onto day
    //if the new one is earlier, make it previous_earlier_date




return 0;
}


*/
