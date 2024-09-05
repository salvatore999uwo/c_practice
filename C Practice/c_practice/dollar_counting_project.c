/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//program to split an amount of dollars into 20, 10, 5, and 1 dollar bills

//eg. 94 dollars. this is divided first by 20, then the remainder by 10, then by 5, then by 1

//variables
int amount;
int bills_20;
int remainder_after_20s;
int bills_5;
int remainder_after_5s;
int bills_1;

//user input
printf("How much does it cost? ");
scanf("%d", &amount);

//find number of 20s, get remainder
bills_20 = amount / 20;
remainder_after_20s = amount - (bills_20*20);

//find number of 5s, get remainder
bills_5 = remainder_after_20s / 5;
remainder_after_5s = remainder_after_20s - (bills_5*5);

//find number of 1s
bills_1 = remainder_after_5s;

//output result to user
printf("how many 20 dollar bills: %d\n", bills_20);
printf("remainder now: %d\n", remainder_after_20s);

printf("how many 5 dollar bills: %d\n", bills_5);
printf("remainder now: %d", remainder_after_5s);

printf("how many 1 dollar bills: %d\n", bills_1);

printf("So in total, we have %d 20's, %d 5's, and %d 1's. and how many did we start with again? oh yeah, $%d\n", bills_20, bills_5, bills_1, amount);

return 0;
}
*/


