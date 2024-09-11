//chapter 6, loops
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
//project 3 - reduce fraction
int user_num1,user_num2,gcd,remainder, numerator,denom;

 printf("enter a fraction...");
 scanf("%d/%d",&user_num1,&user_num2);

numerator = user_num1;
denom = user_num2;

//find GCD, then divide each part of the fraction by the GCD
 while(1){
    if(user_num1 == 0){
        gcd = user_num2;
        break;
    }
remainder = user_num2 % user_num1;
user_num2 = user_num1;
user_num1 = remainder;
}

printf("the gcd of the num and denom is %d\n",gcd);

printf("your reduced fraction is... %d/%d", (numerator/gcd),(denom/gcd));



return 0;
}

*/
