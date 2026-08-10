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
    float No1=0.0f,No2=0.0f,Result=0.0f; //Variabel creation with default value

    printf("Enter First number\n");
    scanf("%f",&No1);

    printf("Enter Second number\n");
    scanf("%f",&No2);

    Result=No1+No2;
    printf("Addition of both numbers is :%f\n",Result);


    return 0;
}