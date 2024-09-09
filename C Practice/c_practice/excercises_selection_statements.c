//chapter 5, selection statements
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
int i,j,k;

i=3; j=4; k=5;

printf("%d\n", i < j || ++j < k); // doesn't even execute the code after the || OR operator
printf("%d %d %d", i,j,k);

return 0;
}



int i,j,k;

i=7; j=8; k=9;

printf("%d\n", i - 7 && j++ < k);


printf("%d %d %d",i,j,k);

int i,j,k;

i=7;j=8;k=9;

printf("%d\n", (i=j) || (j=k));


printf("%d %d %d",i,j,k);


//excercise 4
int i,j,k;

//if expr1 then expr2 else expr3
//expr1 ? expr2 : expr3

i=1;j=1;

printf("%d",i < j ? i = -1 : i != j);

//this expression will return -1 if i<j, 0 if i==j, and 1 if i>j




//excercise 8

if(age >= 13)
    if(age <= 19)
        teenager = true;
    else
        teenager = false;
else if(age < 13)
    teenager = false;


if(age >= 13 && age <= 19){
    teenager = true;
}
else{
    teenager = false;
}

(age >= 13 && age <= 19) ? (teenager = true); : teenager = false;

teenager = (age >= 13 && age <= 19);



//excercise 9
int i;

i=1;
switch(i % 3){
case 0: printf("zero"); break;
case 1: printf("one"); break;
case 2: printf("two"); break;
}



//excercise 10
int area_code;

printf("enter your area code...");
scanf("%d",&area_code);

switch(area_code){
case 229:
    printf("albany");
    break;
case 404: case 470: case 678: case 770:
    printf("atlanta");
    break;
case 478:
    printf("macon");
    break;
case 706: case 762:
    printf("columbus");
    break;
case 912:
    printf("savannah");
    break;
default:
    printf("area code not recognized");
}







































*/
