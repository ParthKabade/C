#include<stdio.h>
#include<stdbool.h>       //boolean header file

bool CheckEvenOdd(int iNo)            //bool,true,false are keywords
{
    int iReminder=0;

    iReminder=iNo % 2;

    if(iReminder==0)
    {
        return true;
    }
    else
    {
        return false;
    }

    return iReminder;
}

int main()
{
    int iValue=0;
    bool bRet=false;
    
    printf("Enter Number to check wether it is even or odd : ");       
    scanf("%d",&iValue);

    bRet=CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is even\n",iValue);
    }
    else
    {
        printf("%d is odd\n",iValue);
    }

    return 0;
}