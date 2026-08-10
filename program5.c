/*
    Algorithm

    START
        Accept first number as No1
        Accept second number as No2
        Performe addition of No1 and No2 
        Display the Result
    STOP
*/
#include<stdio.h>

int main()
{
    float No1,No2,Result;

    printf("Enter First number\n");
    scanf("%f",&No1);

    printf("Enter Second number\n");
    scanf("%f",&No2);

    Result=No1+No2;
    printf("Addition of both numbers is :%f\n",Result);


    return 0;
}