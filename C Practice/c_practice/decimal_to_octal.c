//chapter 4
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//programming project 4, convert decimal to octal
int user_num, octal_num, digit1,digit2,digit3,digit4,digit5;

printf("enter number in decimal...");
scanf("%d",&user_num);

//code block
//digit 1 is the last digit (least significant digit)
digit1 = user_num % 8;
digit2 = (user_num/8)%8;
digit3 = ((user_num/8)/8)%8;
digit4 = (((user_num/8)/8)/8)%8;
digit5 = ((((user_num/8)/8)/8)/8)%8;

octal_num = digit5*10000 + digit4*1000 + digit3*100 + digit2*10 + digit1;
printf("your number in octal (base 8) is %5d\n", octal_num);


return 0;
}

*/
