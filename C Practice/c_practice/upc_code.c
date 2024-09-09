//chapter 4
/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int i,j;

//unary operators
i = +1;
j = -i;
//unary is one operand needed, binary is two operands needed

//% is the remainder operator
//12 % 5 equals 1

printf("12 divided by 5 has a remainder of... %d", (16 % 5));

//when a binary operator is used between an int and a float, the result is a float

//operator precedence
//highest: unary +,-
//medium: *, /, %
//lowest: binary +,-


//UPC code check
//0 13800 15173 5

//0, 13800, 15173, 5
//that's 4 parts




// Computes a Universal Product Code check digit

int d , il, i2, i3, i4, is, jl, j2, j3, j4, jS;
f irst_sum, second sum, total;
printf( 11 Enter the first (single) digit: 11
);
scanf ( "%1d 11 , &d) ;
printf( 11 Enter first group of five digits: ");
scanf( 11 %ld%ld%ld%ld%ld 11 , &il, &i2, &i3, &i4, &i5);
printf("Enter second group of five digits: ");
scanf( 11 %ld%ld%ld%ld%ld'1 1 &jl, &j2, &j3, &j4, &jS);
The missing check dlgits arc 8 (Ji!) and 6 (Ocenn Spr:1)).
58 Chapter 4 Expressions
first_sum = d + i2 + i4 + jl + j3 + j5;
second_sum = il + i3 + 15 + j2 + j4;
total= 3 * first_sum + second_sum;
printf("Check digit: %d\n", 9 - ((total - l) % 10));










return 0;
}

*/
