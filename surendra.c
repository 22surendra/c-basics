#include<stdio.h>
int main()
{

float principal=1000,time=2,rate=7.5,interest;
printf("principal=\n");
printf("time=\n");
printf("rate=\n");
scanf("%f%f%f",&principal,&time,&rate);
interest=(principal*time*rate)/100;
printf("interest=%.2f",interest);
}
