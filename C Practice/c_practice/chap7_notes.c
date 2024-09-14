//chapter 7, basic types
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{

char ch;

scanf(" %c",&ch); //this will make scanf skip white space before the input character
printf("%c",ch);

putchar(ch); //prints ch to the screen

ch = getchar(ch); //gets character and saves it to ch

do{
    scanf("%c", &ch);
} while(ch != '\n');

do{
    ch = getchar();
} while(ch != '\n');


while((ch = getchar()) != '\n')
    ;

while(getchar() != '\n')
    ;

while((ch = getchar()) == ' ')
    ;


//determines length of a message

char ch;
int len = 0;

printf("enter a message...");
ch = getchar();
while(ch != '\n'){
    len++;
    ch = getchar();
}
printf("your message was %d characters long",len);




//shorter version
int len = 0;

printf("enter a message...");
while(getchar() != '\n')
    len++;
printf("your message was %d characters long. \n",len);


















return 0;
}
*/

