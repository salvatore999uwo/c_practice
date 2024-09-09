/*
//project 2: convert 24 hour time to 12 hour time
int user_hour;
int user_minute;

int output_hour;
int output_minute;
char output_signifier;

printf("enter a time in 24-hour format...");
scanf("%d:%d",&user_hour,&user_minute);


//if more than 12, take 12 off the hours
if(user_hour > 12 && user_hour <= 24){
    output_hour = user_hour - 12;
    output_minute = user_minute;
    output_signifier = 'P';
}
else if(user_hour == 12){
    output_hour = 12;
    output_minute = user_minute;
    output_signifier = 'P';
}
else{
    output_hour = user_hour;
    output_minute = user_minute;
    output_signifier = 'A';
}


printf("your time in 12 hour format... %d:%d %c\n",output_hour,output_minute, output_signifier);

*/
