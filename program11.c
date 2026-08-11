/*
    START
        Accept number as No
        if
            No is completely divisible by 2 then print even 
        otherwise
            print Odd
    STOP

    START
        Accept number as No
        Divide No by 2 
        if  remeinder is 0
            then print as Even
        otherwise
            print as Odd

    STOP
*/

#include<stdio.h>
/*
if u divide any number by n then the reminder must be in between 0 to n-1
*/

int main()
{
    int iValue=0;
    int iReminder=0;

    printf("Enter Number\n");       
    scanf("%d",&iValue);

    iReminder=iValue % 2;

    if(iReminder==0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is odd\n");
    }


    return 0;
}